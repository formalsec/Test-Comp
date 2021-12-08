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

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

extern int __VERIFIER_nondet_int(char *);
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

extern unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  unsigned int M = __VERIFIER_nondet_uint("M");
  int A[M];
  int B[M];
  int C[M];
  unsigned int i;
  for (i = 0; i < M; i++)
  {
    A[i] = __VERIFIER_nondet_int("A[i]");
    if (!(A[i] <= 1000000))
      return 0;

  }

  for (i = 0; i < M; i++)
  {
    B[i] = __VERIFIER_nondet_int("B[i]");
    if (!(B[i] <= 1000000))
      return 0;

  }

  for (i = 0; i < M; i++)
    C[i] = A[i] + B[i];

  for (i = 0; i < M; i++)
    __VERIFIER_assert(C[i] == (A[i] + B[i]));

}

