extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Rump_double.c", 3, "reach_error");
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

int main()
{
  double x;
  double y;
  double r;
  x = 77617.;
  y = 33096.;
  r = ((((((((333.75 * y) * y) * y) * y) * y) * y) + ((x * x) * (((((((11.0 * x) * x) * y) * y) - (((((y * y) * y) * y) * y) * y)) - ((((121.0 * y) * y) * y) * y)) - 2.0))) + ((((((((5.5 * y) * y) * y) * y) * y) * y) * y) * y)) + (x / (2. * y));
  __VERIFIER_assert(r >= 0);
  return 0;
}

