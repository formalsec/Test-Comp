extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "bresenham.c", 7, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
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
  int X;
  int Y;
  int v;
  int x;
  int y;
  X = __VERIFIER_nondet_int("X");
  Y = __VERIFIER_nondet_int("Y");
  v = (2 * Y) - X;
  y = 0;
  x = 0;
  while (1)
  {
    __VERIFIER_assert(((((((2 * Y) * x) - ((2 * X) * y)) - X) + (2 * Y)) - v) == 0);
    if (!(x <= X))
      break;

    if (v < 0)
    {
      v = v + (2 * Y);
    }
    else
    {
      v = v + (2 * (Y - X));
      y++;
    }

    x++;
  }

  __VERIFIER_assert((((((((2 * Y) * x) - ((2 * x) * y)) - X) + (2 * Y)) - v) + (2 * y)) == 0);
  return 0;
}

