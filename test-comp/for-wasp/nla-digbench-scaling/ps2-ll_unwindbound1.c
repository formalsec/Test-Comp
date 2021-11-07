extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "ps2-ll.c", 3, "reach_error");
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
  int k;
  long long y;
  long long x;
  long long c;
  k = __VERIFIER_nondet_int("k");
  y = 0;
  x = 0;
  c = 0;
  while ((counter++) < 1)
  {
    __VERIFIER_assert((((y * y) - (2 * x)) + y) == 0);
    if (!(c < k))
      break;

    c = c + 1;
    y = y + 1;
    x = y + x;
  }

  __VERIFIER_assert((((y * y) - (2 * x)) + y) == 0);
  return 0;
}

