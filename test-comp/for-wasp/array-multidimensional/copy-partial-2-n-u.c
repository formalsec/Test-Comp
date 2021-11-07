extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "copy-partial-2-n-u.c", 3, "reach_error");
}

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

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
  int m = 1000;
  int n = 1500;
  int q = 500;
  int s = 700;
  int A[m][n];
  int B[m][n];
  assume_abort_if_not(q < m);
  assume_abort_if_not(s < n);
  i = 0;
  j = 0;
  while (i < m)
  {
    j = 0;
    while (j < n)
    {
      B[i][j] = __VERIFIER_nondet_int("B[i][j]");
      j = j + 1;
    }

    i = i + 1;
  }

  i = 0;
  j = 0;
  while (i < q)
  {
    j = 0;
    while (j < s)
    {
      A[i][j] = B[i][j];
      j = j + 1;
    }

    i = i + 1;
  }

  i = 0;
  j = 0;
  while (i < q)
  {
    j = 0;
    while (j < s)
    {
      __VERIFIER_assert(A[i][j] == B[i][j]);
      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

