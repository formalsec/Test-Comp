extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "freire1.c", 10, "reach_error");
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
    }

  }

  return;
}

int main()
{
  int r;
  double a;
  double x;
  a = __VERIFIER_nondet_double("a");
  assume_abort_if_not(__logand(a >= 0, a <= 10));
  x = a / 2.0;
  r = 0;
  while (1)
  {
    __VERIFIER_assert(((int) ((((r * r) - a) - r) + (2 * x))) == 0);
    if (!(x > r))
      break;

    x = x - r;
    r = r + 1;
  }

  __VERIFIER_assert(((int) ((((r * r) - a) - r) + (2 * x))) == 0);
  return 0;
}

