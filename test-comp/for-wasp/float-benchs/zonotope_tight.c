extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "zonotope_tight.c", 3, "reach_error");
}

extern double __VERIFIER_nondet_double(char *);
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

int main()
{
  double x;
  double y;
  x = __VERIFIER_nondet_double("x");
  assume_abort_if_not(__logand(x >= 0., x <= 10.));
  y = (x * x) - x;
  if (y >= 0)
    y = x / 10.;
  else
    y = (x * x) + 2.;

  __VERIFIER_assert(__logand(y >= 0., y <= 4.));
  return 0;
}

