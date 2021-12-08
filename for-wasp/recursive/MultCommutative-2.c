extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "MultCommutative-2.c", 3, "reach_error");
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
  if (__logor(m < 0, m > 46340))
  {
    return 0;
  }

  int n = __VERIFIER_nondet_int("n");
  if (__logor(n < 0, n > 46340))
  {
    return 0;
  }

  int res1 = mult(m, n);
  int res2 = mult(n, m);
  if (__logand(__logand(res1 != res2, m > 0), n > 0))
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }
  else
  {
    return 0;
  }

}

