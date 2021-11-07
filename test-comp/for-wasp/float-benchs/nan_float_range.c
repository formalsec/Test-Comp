extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "nan_float_range.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
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
  float x;
  x = __VERIFIER_nondet_float("x");
  if (__logand(x >= (-1e10), x <= 1e10))
  {
    __VERIFIER_assert(x == x);
  }

  return 0;
}

