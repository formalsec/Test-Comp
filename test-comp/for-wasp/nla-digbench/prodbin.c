extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "prodbin.c", 6, "reach_error");
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
  int a;
  int b;
  int x;
  int y;
  int z;
  a = __VERIFIER_nondet_double("a");
  b = __VERIFIER_nondet_double("b");
  assume_abort_if_not(b >= 1);
  x = a;
  y = b;
  z = 0;
  while (1)
  {
    __VERIFIER_assert((z + (x * y)) == (a * b));
    if (!(y != 0))
      break;

    if ((y % 2) == 1)
    {
      z = z + x;
      y = y - 1;
    }

    x = 2 * x;
    y = y / 2;
  }

  __VERIFIER_assert(z == (a * b));
  return 0;
}

