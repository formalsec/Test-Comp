extern unsigned int __VERIFIER_nondet_uint(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sum_non_eq-3.c", 4, "reach_error");
}

unsigned int sum(unsigned int n, unsigned int m)
{
  if (n == 0)
  {
    return m;
  }
  else
  {
    return sum(n - 1, m + 1);
  }

}

int main(void)
{
  unsigned int a = __VERIFIER_nondet_uint("a");
  unsigned int b = __VERIFIER_nondet_uint("b");
  unsigned int result = sum(a, b);
  if (result == (a + b))
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

