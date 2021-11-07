extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "fermat1.c", 5, "reach_error");
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
  int A;
  int R;
  int u;
  int v;
  int r;
  A = __VERIFIER_nondet_double("A");
  R = __VERIFIER_nondet_double("R");
  assume_abort_if_not(((R - 1) * (R - 1)) < A);
  assume_abort_if_not((A % 2) == 1);
  u = (2 * R) + 1;
  v = 1;
  r = (R * R) - A;
  while (1)
  {
    __VERIFIER_assert((4 * (A + r)) == ((((u * u) - (v * v)) - (2 * u)) + (2 * v)));
    if (!(r != 0))
      break;

    while (1)
    {
      __VERIFIER_assert((4 * (A + r)) == ((((u * u) - (v * v)) - (2 * u)) + (2 * v)));
      if (!(r > 0))
        break;

      r = r - v;
      v = v + 2;
    }

    while (1)
    {
      __VERIFIER_assert((4 * (A + r)) == ((((u * u) - (v * v)) - (2 * u)) + (2 * v)));
      if (!(r < 0))
        break;

      r = r + u;
      u = u + 2;
    }

  }

  __VERIFIER_assert((4 * A) == ((((u * u) - (v * v)) - (2 * u)) + (2 * v)));
  return 0;
}

