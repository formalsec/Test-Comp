extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "freire2.c", 10, "reach_error");
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

int counter = 0;
int main()
{
  int r;
  double a;
  double x;
  double s;
  a = __VERIFIER_nondet_double("a");
  x = a;
  s = 3.25;
  r = 1;
  while ((counter++) < 50)
  {
    __VERIFIER_assert((((int) (4 * s)) - ((12 * r) * r)) == 1);
    __VERIFIER_assert(((((((4 * r) * r) * r) - ((6 * r) * r)) + (3 * r)) + ((int) ((4 * x) - (4 * a)))) == 1);
    __VERIFIER_assert((int) ((((((((8 * r) * s) - (24 * a)) + (16 * r)) - (12 * s)) + (24 * x)) - 3) == 0));
    if (!((x - s) > 0.0))
      break;

    x = x - s;
    s = (s + (6 * r)) + 3;
    r = r + 1;
  }

  __VERIFIER_assert((((int) (4 * s)) - ((12 * r) * r)) == 1);
  __VERIFIER_assert(((((((4 * r) * r) * r) - ((6 * r) * r)) + (3 * r)) + ((int) ((4 * x) - (4 * a)))) == 1);
  __VERIFIER_assert((int) ((((((((8 * r) * s) - (24 * a)) + (16 * r)) - (12 * s)) + (24 * x)) - 3) == 0));
  return 0;
}

