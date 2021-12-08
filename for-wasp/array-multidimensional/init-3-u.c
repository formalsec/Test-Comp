extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "init-3-u.c", 3, "reach_error");
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

int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int j;
  int k;
  int n = 1000;
  int A[n][n][n];
  int C = __VERIFIER_nondet_int("C");
  i = 0;
  j = 0;
  k = 0;
  while (i < n)
  {
    j = 0;
    k = 0;
    while (j < n)
    {
      k = 0;
      while (k < n)
      {
        A[i][j][k] = C;
        k = k + 1;
      }

      j = j + 1;
    }

    i = i + 1;
  }

  i = 0;
  j = 0;
  k = 0;
  while (i < n)
  {
    j = 0;
    k = 0;
    while (j < n)
    {
      k = 0;
      while (k < n)
      {
        __VERIFIER_assert(A[i][j][k] == C);
        k = k + 1;
      }

      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

