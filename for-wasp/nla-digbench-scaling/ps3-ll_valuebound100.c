extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "ps3-ll.c", 3, "reach_error");
}

extern short __VERIFIER_nondet_short(char *);
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
  short k;
  long long y;
  long long x;
  long long c;
  k = __VERIFIER_nondet_short("k");
  assume_abort_if_not(__logand(k >= 0, k <= 100));
  y = 0;
  x = 0;
  c = 0;
  while (1)
  {
    __VERIFIER_assert(((((6 * x) - (((2 * y) * y) * y)) - ((3 * y) * y)) - y) == 0);
    if (!(c < k))
      break;

    c = c + 1;
    y = y + 1;
    x = (y * y) + x;
  }

  __VERIFIER_assert(((((6 * x) - (((2 * y) * y) * y)) - ((3 * y) * y)) - y) == 0);
  return 0;
}

