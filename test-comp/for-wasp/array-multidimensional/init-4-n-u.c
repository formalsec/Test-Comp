extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "init-4-n-u.c", 3, "reach_error");
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
  int l;
  int m = 1000;
  int n = 1500;
  int p = 1800;
  int q = 2000;
  int A[m][n][p][q];
  int C = __VERIFIER_nondet_int("C");
  i = 0;
  j = 0;
  k = 0;
  l = 0;
  while (i < m)
  {
    j = 0;
    k = 0;
    l = 0;
    while (j < n)
    {
      k = 0;
      l = 0;
      while (k < p)
      {
        l = 0;
        while (l < q)
        {
          A[i][j][k][l] = C;
          l = l + 1;
        }

        k = k + 1;
      }

      j = j + 1;
    }

    i = i + 1;
  }

  i = 0;
  j = 0;
  k = 0;
  l = 0;
  while (i < m)
  {
    j = 0;
    k = 0;
    l = 0;
    while (j < n)
    {
      k = 0;
      l = 0;
      while (k < p)
      {
        l = 0;
        while (l < q)
        {
          __VERIFIER_assert(A[i][j][k][l] == C);
          l = l + 1;
        }

        k = k + 1;
      }

      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

