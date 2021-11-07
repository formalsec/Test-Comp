extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "lcm2.c", 5, "reach_error");
}

extern unsigned __VERIFIER_nondet_uint(char *);
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
  unsigned a;
  unsigned b;
  unsigned x;
  unsigned y;
  unsigned u;
  unsigned v;
  a = __VERIFIER_nondet_uint("a");
  b = __VERIFIER_nondet_uint("b");
  assume_abort_if_not(a >= 1);
  assume_abort_if_not(b >= 1);
  assume_abort_if_not(a <= 65535);
  assume_abort_if_not(b <= 65535);
  x = a;
  y = b;
  u = b;
  v = a;
  while ((counter++) < 100)
  {
    __VERIFIER_assert(((x * u) + (y * v)) == ((2 * a) * b));
    if (!(x != y))
      break;

    if (x > y)
    {
      x = x - y;
      v = v + u;
    }
    else
    {
      y = y - x;
      u = u + v;
    }

  }

  __VERIFIER_assert(((x * u) + (y * v)) == ((2 * a) * b));
  return 0;
}

