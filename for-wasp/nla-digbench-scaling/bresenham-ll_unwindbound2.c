extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "bresenham-ll.c", 7, "reach_error");
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

int counter = 0;
int main()
{
  int X;
  int Y;
  long long x;
  long long y;
  long long v;
  long long xy;
  long long yx;
  X = __VERIFIER_nondet_int("X");
  Y = __VERIFIER_nondet_int("Y");
  v = (((long long) 2) * Y) - X;
  y = 0;
  x = 0;
  while ((counter++) < 2)
  {
    yx = ((long long) Y) * x;
    xy = ((long long) X) * y;
    __VERIFIER_assert((((((2 * yx) - (2 * xy)) - X) + (((long long) 2) * Y)) - v) == 0);
    if (!(x <= X))
      break;

    if (v < 0)
    {
      v = v + (((long long) 2) * Y);
    }
    else
    {
      v = v + (2 * (((long long) Y) - X));
      y++;
    }

    x++;
  }

  xy = ((long long) x) * y;
  yx = ((long long) Y) * x;
  __VERIFIER_assert(((((((2 * yx) - (2 * xy)) - X) + (((long long) 2) * Y)) - v) + (2 * y)) == 0);
  return 0;
}

