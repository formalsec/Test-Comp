#ifndef ASSERT_H
#define ASSERT_H

void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);

_Bool sym_bool(char *);
int    sym_int    (char*);
long long  sym_long   (char*);
float  sym_float  (char*);
double sym_double (char*);

int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
#endif
