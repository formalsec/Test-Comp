extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "prod4br.c", 5, "reach_error");
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
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  assume_abort_if_not(y >= 1);
  a = x;
  b = y;
  p = 1;
  q = 0;
  while (1)
  {
    __VERIFIER_assert((q + ((a * b) * p)) == (x * y));
    if (!__logand(a != 0, b != 0))
      break;

    if (__logand((a % 2) == 0, (b % 2) == 0))
    {
      a = a / 2;
      b = b / 2;
      p = 4 * p;
    }
    else
      if (__logand((a % 2) == 1, (b % 2) == 0))
    {
      a = a - 1;
      q = q + (b * p);
    }
    else
      if (__logand((a % 2) == 0, (b % 2) == 1))
    {
      b = b - 1;
      q = q + (a * p);
    }
    else
    {
      a = a - 1;
      b = b - 1;
      q = q + (((a + b) + 1) * p);
    }



  }

  __VERIFIER_assert(q == (x * y));
  __VERIFIER_assert((a * b) == 0);
  return 0;
}

