extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Addition03-1.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
long long addition(long long m, long long n)
{
  if (n == 0)
  {
    return m;
  }

  if (n > 0)
  {
    return addition(m + 1, n - 1);
  }

  if (n < 0)
  {
    return addition(m - 1, n + 1);
  }

}

int main()
{
  int m = __VERIFIER_nondet_int("m");
  int n = __VERIFIER_nondet_int("n");
  long long result = addition(m, n);
  if (__logor(__logor(m < 100, n < 100), result >= 200))
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

