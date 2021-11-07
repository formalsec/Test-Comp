extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "mannadiv.c", 9, "reach_error");
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
  int x1;
  int x2;
  int y1;
  int y2;
  int y3;
  x1 = __VERIFIER_nondet_int("x1");
  x2 = __VERIFIER_nondet_int("x2");
  assume_abort_if_not(x1 >= 0);
  assume_abort_if_not(x2 != 0);
  y1 = 0;
  y2 = 0;
  y3 = x1;
  while ((counter++) < 1)
  {
    __VERIFIER_assert((((y1 * x2) + y2) + y3) == x1);
    if (!(y3 != 0))
      break;

    if ((y2 + 1) == x2)
    {
      y1 = y1 + 1;
      y2 = 0;
      y3 = y3 - 1;
    }
    else
    {
      y2 = y2 + 1;
      y3 = y3 - 1;
    }

  }

  __VERIFIER_assert(((y1 * x2) + y2) == x1);
  return 0;
}

