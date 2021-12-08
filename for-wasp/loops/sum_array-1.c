extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sum_array-1.c", 3, "reach_error");
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
    A[i] = __VERIFIER_nondet_int("A[i]");

  for (i = 0; i < M; i++)
    B[i] = __VERIFIER_nondet_int("B[i]");

  for (i = 0; i < M; i++)
    C[i] = A[i] + B[i];

  for (i = 0; i < M; i++)
    __VERIFIER_assert(C[i] == (A[i] - B[i]));

}

