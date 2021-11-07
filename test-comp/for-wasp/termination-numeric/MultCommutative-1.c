extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "MultCommutative-1.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int mult(int n, int m)
{
  if (m < 0)
  {
    return mult(n, -m);
  }

  if (m == 0)
  {
    return 0;
  }

  return n + mult(n, m - 1);
}

int main()
{
  int m = __VERIFIER_nondet_int("m");
  if (m < 0)
  {
    return 0;
  }

  int n = __VERIFIER_nondet_int("n");
  if (n < 0)
  {
    return 0;
  }

  int res1 = mult(m, n);
  int res2 = mult(n, m);
  if (__logor(res1 == 0, __logor(m > 0, n > 0)))
  {
    return 0;
  }
  else
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

