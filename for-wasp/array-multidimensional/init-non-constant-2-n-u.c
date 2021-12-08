extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "init-non-constant-2-n-u.c", 3, "reach_error");
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
unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  int i;
  int j;
  int m = 1000;
  int n = 1500;
  int q;
  int s;
  unsigned int A[m][n];
  unsigned int C = __VERIFIER_nondet_uint("C");
  q = __VERIFIER_nondet_int("q");
  s = __VERIFIER_nondet_int("s");
  i = 0;
  j = 0;
  assume_abort_if_not(q < m);
  assume_abort_if_not(s < n);
  while (i < q)
  {
    j = 0;
    while (j < s)
    {
      A[i][j] = (i + j) + C;
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
      __VERIFIER_assert(A[i][j] == ((i + j) + C));
      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

