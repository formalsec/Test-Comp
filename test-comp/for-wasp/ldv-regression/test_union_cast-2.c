extern void abort(void);
void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
void reach_error()
{
  assert(0);
}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
}

int CURRENTLY_UNKNOWN;
struct l_struct_2E_X
{
  double field0;
};
int main(void)
{
  struct l_struct_2E_X llvm_cbe_var;
  *(&llvm_cbe_var.field0) = 0x1.4p+4;
  *((unsigned int *) (&llvm_cbe_var.field0)) = 10u;
  __VERIFIER_assert((*((unsigned int *) (&llvm_cbe_var.field0))) == 10u);
  return 0;
}

