extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "nan_double.c", 3, "reach_error");
}

extern double __VERIFIER_nondet_double(char *);
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

int main()
{
  double x;
  x = __VERIFIER_nondet_double("x");
  __VERIFIER_assert(x == x);
  return 0;
}

