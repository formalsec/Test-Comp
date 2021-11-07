#include "assert.h"

void assume(int expr) { /* EMPTY*/ }
void assert(int expr) { /* EMPTY*/ }
void *alloc(void *ptr, unsigned int size) { return ptr; }
void dealloc(void *ptr) {  }
int is_symbolic(void *sym_var, unsigned int length) { return 0; }


_Bool sym_bool(char *name)   { return (_Bool)0; }
int    sym_int    (char *name)   { return (int)    0; }
long long  sym_long   (char *name)   { return (long long)   0; }
float  sym_float  (char *name)   { return (float)  0; }
double sym_double (char *name)   { return (double) 0; }

int __logand(int a, int b) {
  __asm__ __volatile__(
    "local.get 0;"
    "i32.const 0;"
    "i32.ne;"
    "local.get 1;"
    "i32.const 0;"
    "i32.ne;"
    "i32.and;"
    "return;"
  );
}

int __logor(int a, int b) {
  __asm__ __volatile__(
    "local.get 0;"
    "i32.const 0;"
    "i32.ne;"
    "local.get 1;"
    "i32.const 0;"
    "i32.ne;"
    "i32.or;"
    "return;"
  );
}

int __ternary(int c, int r1, int r0) {
  return c ? r1 : r0;
}
