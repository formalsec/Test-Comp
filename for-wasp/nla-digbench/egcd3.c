extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "egcd3.c", 4, "reach_error");
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
  int x;
  int y;
  int a;
  int b;
  int p;
  int q;
  int r;
  int s;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  assume_abort_if_not(x >= 1);
  assume_abort_if_not(y >= 1);
  a = x;
  b = y;
  p = 1;
  q = 0;
  r = 0;
  s = 1;
  while (1)
  {
    if (!(b != 0))
      break;

    int c;
    int k;
    c = a;
    k = 0;
    while (1)
    {
      if (!(c >= b))
        break;

      int d;
      int v;
      d = 1;
      v = b;
      while (1)
      {
        __VERIFIER_assert(a == ((y * r) + (x * p)));
        __VERIFIER_assert(b == ((x * q) + (y * s)));
        __VERIFIER_assert(a == ((k * b) + c));
        __VERIFIER_assert(v == (b * d));
        if (!(c >= (2 * v)))
          break;

        d = 2 * d;
        v = 2 * v;
      }

      c = c - v;
      k = k + d;
    }

    a = b;
    b = c;
    int temp;
    temp = p;
    p = q;
    q = temp - (q * k);
    temp = r;
    r = s;
    s = temp - (s * k);
  }

  __VERIFIER_assert(((((p * x) - (q * x)) + (r * y)) - (s * y)) == a);
  return 0;
}

