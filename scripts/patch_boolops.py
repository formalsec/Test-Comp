#!/usr/bin/env python3
import os, glob, sys

from pycparser import (
    parse_file,
    c_parser,
    c_ast,
    c_generator 
)

cnt = 0
sys.setrecursionlimit(10000)

class MethodNotImplemented(Exception):
    """Exception raised when visit method not available"""

    def __init__(self, name):
        self.name = name
        self.message = f'visit_{name}: method not implemented'
        super().__init__(self.message)

class LineCounter(c_ast.NodeVisitor):

    def __init__(self, init):
        self.count = init 

    def _visit(self, node):
        return self.visit(node) if node else node

    def inc_count(self):
        self.count += 1

    def add_count(self, count):
        self.count += count

    def set_count(self, count):
        self.count = count

    def get_count(self):
        return self.count

    def visit_Case(self, node):
        # inc with count of stmts
        for stmt in node:
            self._visit(stmt)
        return node

    def visit_Compound(self, node):
        n_stmts = []
        for stmt in node:
            n_stmt = self._visit(stmt)
            if type(n_stmt) is c_ast.Compound:
                n_stmts += n_stmt.block_items
            else:
                n_stmts.append(n_stmt)
        return c_ast.Compound(n_stmts, node.coord)

    def visit_DoWhile(self, node):
        # inc with count of stmts
        self._visit(node.stmt)
        return node

    def visit_FileAST(self, node):
        # inc with count of stmts
        self._visit(node.ext)
        return node

    def visit_For(self, node):
        # inc with count of stmts
        self._visit(node.stmt)
        return node

    def visit_FuncDef(self, node):
        # inc with count of stmts
        self._visit(node.body)
        return node

    def visit_Label(self, node):
        self._visit(node.stmt)
        return node

    def visit_If(self, node):
        self._visit(node.iftrue)
        self._visit(node.iffalse)
        return node

    def visit_Switch(self, node):
        self._visit(node.stmt)
        return node

    def visit_While(self, node):
        self._visit(node.stmt)
        return node

    def generic_visit(self, node):
        self.inc_count()
        return node

class Instrumentor(c_ast.NodeVisitor):

    def __init__(self):
        self.if_ctx = []

    def _safe_visit(self, node):
        return self.visit(node) if node is not None else node

    def _safe_map(self, f, lst):
        return list(map(f, lst)) if lst is not None else lst

    def _get_binop_func(self, op):
        if op == '&&':
            return '__logand'
        elif op == '||':
            return '__logor'
        else:
            raise RuntimeError

    def visit_ArrayDecl(self, node):
        return node

    def visit_ArrayRef(self, node):
        return node

    def visit_Assignment(self, node):
        return c_ast.Assignment(
            node.op,
            self._safe_visit(node.lvalue),
            self._safe_visit(node.rvalue),
            node.coord
        )

    def visit_BinaryOp(self, node):
        if node.op in ['&&', '||']:
            return c_ast.FuncCall(
                c_ast.ID(self._get_binop_func(node.op)),
                c_ast.ExprList([
                    self._safe_visit(node.left),
                    self._safe_visit(node.right)
                ]),
                node.coord
            )
        return c_ast.BinaryOp(
            node.op,
            self._safe_visit(node.left),
            self._safe_visit(node.right),
            node.coord
        )

    def visit_Break(self, node):
        return node

    def visit_Case(self, node):
        return c_ast.Case(
            self._safe_visit(node.expr),
            list(map(self._safe_visit, node.stmts)),
            node.coord
        )

    def visit_Cast(self, node):
        return c_ast.Cast(
            node.to_type,
            self._safe_visit(node.expr),
            node.coord
        )

    def visit_Compound(self, node):
        return c_ast.Compound(
            self._safe_map(self._safe_visit, node.block_items),
            node.coord
        )

    def visit_CompoundLiteral(self, node):
        return c_ast.CompoundLiteral(
            node.type,
            self._safe_visit(node.init),
        )

    def visit_Constant(self, node):
        return node

    def visit_Continue(self, node):
        return node

    def visit_Decl(self, node):
        return node

    def visit_DeclList(self, node):
        return c_ast.DeclList(
            list(map(self._safe_visit, node.decls)),
            node.coord
        )

    def visit_Default(self, node):
        return c_ast.Default(
            list(map(self._safe_visit, node.stmts)),
            node.coord
        )

    def visit_DoWhile(self, node):
        global cnt
        cnt = cnt + 1
        n_cond = c_ast.FuncCall(
            c_ast.ID('IFG'),
            c_ast.ExprList([
                self._safe_visit(node.cond), 
                c_ast.Constant('int', str(cnt))
            ]),
            node.coord
        )
        return c_ast.DoWhile(
            #n_cond,
            self._safe_visit(node.cond),
            self._safe_visit(node.stmt),
            node.coord
        )

    def visit_EllipsisParam(self, node):
        return node

    def visit_EmptyStatement(self, node):
        return node

    def visit_Enum(self, node):
        return node

    def visit_Enumerator(self, node):
        return node

    def visit_EnumeratorList(self, node):
        return node

    def visit_ExprList(self, node):
        return c_ast.ExprList(
            list(map(self._safe_visit, node.exprs)),
            node.coord
        )

    def visit_FileAST(self, node):
        return c_ast.FileAST(
            list(map(self._safe_visit, node.ext)), 
            node.coord
        )

    def visit_For(self, node):
        global cnt
        cnt = cnt + 1
        n_cond = c_ast.FuncCall(
            c_ast.ID('IFG'),
            c_ast.ExprList([
                self._safe_visit(node.cond), 
                c_ast.Constant('int', str(cnt))
            ]),
            node.coord
        )
        self.if_ctx.append(cnt)
        stmt = self._safe_visit(node.stmt)
        if_id = self.if_ctx.pop()
        counter = LineCounter(0)
        counter.visit(node)
        set_ctx = c_ast.FuncCall(
            c_ast.ID('set_priority'),
            c_ast.ExprList([
                c_ast.Constant('int', str(if_id)),
                c_ast.Constant('int', str(counter.get_count())),
                c_ast.Constant('int', str(sys.maxsize))
            ])
        )
        pop_ctx = c_ast.FuncCall(
            c_ast.ID('pop_priority'),
            c_ast.ExprList([
                c_ast.Constant('int', str(if_id))
            ])
        )
        n_for = c_ast.For(
            self._safe_visit(node.init),
            #n_cond,
            self._safe_visit(node.cond),
            self._safe_visit(node.next),
            stmt,
            node.coord
        )
        return c_ast.Compound([set_ctx, n_for, pop_ctx],
                              node.coord)

    def visit_FuncCall(self, node):
        return c_ast.FuncCall(
            node.name,
            self._safe_visit(node.args),
            node.coord
        )

    def visit_FuncDecl(self, node):
        return node

    def visit_FuncDef(self, node):
        return c_ast.FuncDef(
            node.decl,
            node.param_decls,
            self._safe_visit(node.body),
            node.coord
        )

    def visit_Goto(self, node):
        return node

    def visit_ID(self, node):
        return node

    def visit_IdentifierType(self, node):
        return node

    def append_or_block(self, node, stmt):
        if type(node) is c_ast.Compound:
            node.block_items.append(stmt)
            return node
        return c_ast.Compound([node, stmt], node.coord)


    def visit_If(self, node):
        global cnt
        cnt = cnt + 1
        self.if_ctx.append(cnt)
        iftrue = self._safe_visit(node.iftrue)
        iffalse = self._safe_visit(node.iffalse)
        if_id = self.if_ctx.pop()
        counter = LineCounter(0)
        counter.visit(node.iftrue)
        true_cnt = counter.get_count()
        counter.set_count(0)
        counter.visit(node.iffalse)
        false_cnt = counter.get_count()
        set_ctx = c_ast.FuncCall(
            c_ast.ID('set_priority'),
            c_ast.ExprList([
                c_ast.Constant('int', str(if_id)),
                c_ast.Constant('int', str(true_cnt)),
                c_ast.Constant('int', str(false_cnt))
            ])
        )
        pop_ctx = c_ast.FuncCall(
            c_ast.ID('pop_priority'),
            c_ast.ExprList([
                c_ast.Constant('int', str(if_id))
            ])
        )
#        counter.set_count(0)
#        counter.visit(node.iftrue)
#        iftrue = self.append_or_block(
#            iftrue,
#            c_ast.FuncCall(
#                c_ast.ID('update_cov_branch'),
#                c_ast.ExprList([
#                    c_ast.Constant('int', str(if_id)),
#                    c_ast.Constant('int', str(1)),
#                    c_ast.Constant('int', str(counter.get_count()))
#                ])
#            )
#        )
#        for i in self.if_ctx[::-1]:
#            iftrue = self.append_or_block(
#                iftrue,
#                c_ast.FuncCall(
#                    c_ast.ID('update_cov_branch'),
#                    c_ast.ExprList([
#                        c_ast.Constant('int', str(i)),
#                        c_ast.Constant('int', str(1)),
#                        c_ast.Constant('int', str(counter.get_count()))
#                    ])
#                )
#            )
#        if iffalse:
#            counter.set_count(0)
#            counter.visit(node.iffalse)
#            iffalse = self.append_or_block(
#                iffalse,
#                c_ast.FuncCall(
#                    c_ast.ID('update_cov_branch'),
#                    c_ast.ExprList([
#                        c_ast.Constant('int', str(if_id)),
#                        c_ast.Constant('int', str(0)),
#                        c_ast.Constant('int', str(counter.get_count()))
#                    ])
#                )
#            )
#            for i in self.if_ctx[::-1]:
#                iffalse = self.append_or_block(
#                    iffalse,
#                    c_ast.FuncCall(
#                        c_ast.ID('update_cov_branch'),
#                        c_ast.ExprList([
#                            c_ast.Constant('int', str(i)),
#                            c_ast.Constant('int', str(0)),
#                            c_ast.Constant('int', str(counter.get_count()))
#                        ])
#                    )
#                )
        n_if = c_ast.If(
            #n_cond,
            self._safe_visit(node.cond),
            iftrue,
            iffalse,
            node.coord
        )
        return c_ast.Compound([set_ctx, n_if, pop_ctx], node.coord)

    def visit_InitList(self, node):
        return c_ast.InitList(
            list(map(self._safe_visit, node.exprs)),
            node.coord
        )

    def visit_Label(self, node):
        return c_ast.Label(
            node.name,
            self.visit(node.stmt),
            node.coord,
        )

    def visit_NamedInitializer(self, node):
        return c_ast.NamedInitializer(
            list(map(self._safe_visit, node.name)),
            self._safe_visit(node.expr),
            node.coord
        )

    def visit_ParamList(self, node):
        return c_ast.ParamList(
            list(map(self._safe_visit, node.params)),
            node.coord
        )

    def visit_PtrDecl(self, node):
        return node

    def visit_Return(self, node):
        to_add = []
        for i in self.if_ctx:
            to_add.append(
                c_ast.FuncCall(
                    c_ast.ID('pop_priority'),
                    c_ast.ExprList([
                        c_ast.Constant('int', str(i))
                    ])
                )
            )
        n_node = c_ast.Return(self._safe_visit(node.expr), node.coord)
        if to_add:
            return c_ast.Compound(to_add + [n_node], node.coord)
        return n_node

    def visit_Struct(self, node):
        return node

    def visit_StructRef(self, node):
        return node

    def visit_Switch(self, node):
        global cnt
        cnt = cnt + 1
        n_cond = c_ast.FuncCall(
            c_ast.ID('IFG'),
            c_ast.ExprList([
                self._safe_visit(node.cond), 
                c_ast.Constant('int', str(cnt))
            ]),
            node.coord
        )
        return c_ast.Switch(
            #n_cond,
            self._safe_visit(node.cond),
            self._safe_visit(node.stmt),
            node.coord
        )

    def visit_TernaryOp(self, node):
        return c_ast.FuncCall(
            c_ast.ID('__ternary'),
            c_ast.ExprList([
                self._safe_visit(node.cond),
                self._safe_visit(node.iftrue),
                self._safe_visit(node.iffalse)
            ]),
            node.coord
        )
#        return c_ast.TernaryOp(
#            self._safe_visit(node.cond),
#            self._safe_visit(node.iftrue),
#            self._safe_visit(node.iffalse),
#            node.coord
#        )
#
    def visit_TypeDecl(self, node):
        return node

    def visit_Typedef(self, node):
        return node

    def visit_Typename(self, node):
        return node

    def visit_UnaryOp(self, node):
        return c_ast.UnaryOp(
            node.op,
            self._safe_visit(node.expr),
            node.coord
        )

    def visit_Union(self, node):
        return node

    def visit_While(self, node):
        global cnt
        cnt = cnt + 1
        n_cond = c_ast.FuncCall(
            c_ast.ID('IFG'),
            c_ast.ExprList([
                self._safe_visit(node.cond), 
                c_ast.Constant('int', str(cnt))
            ]),
            node.coord
        )
        return c_ast.While(
            #n_cond,
            self._safe_visit(node.cond),
            self._safe_visit(node.stmt),
            node.coord
        )

    def visit_Pragma(self, node):
        return node

    def generic_visit(self, node):
        #raise MethodNotImplemented(node.__class__.__name__)
        return node

def main(argv):
    global cnt
    if argv is None:
        argv = sys.argv[1:]

    if len(argv) != 1:
        print('Usage: ./patch_boolops.py <directory>')
        return

    dir = argv[0]
    fls = glob.glob(f'{dir}/*.c')

    c_gen = c_generator.CGenerator()
    for t in fls:
        cnt = 0
        print(f'Transforming {t}...')
        try:
            ast = parse_file(
                t,
                use_cpp=True,
                cpp_path='clang',
                cpp_args=['-E', r'-Ilib']
            )
        except:
            print(
                f"main: failed to parse \'{t}\'!",
                file=sys.stderr
            )
            continue

        n_ast = Instrumentor().visit(ast)
        n_ast_s = c_gen.visit(n_ast)

        with open(t, 'w') as f:
            f.write(n_ast_s)

if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
