extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sqrt1-ll.c", 5, "reach_error");
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
  int n;
  long long a;
  long long s;
  long long t;
  n = __VERIFIER_nondet_int("n");
  assume_abort_if_not(__logand(n >= 0, n <= 5));
  a = 0;
  s = 1;
  t = 1;
  while (1)
  {
    __VERIFIER_assert(t == ((2 * a) + 1));
    __VERIFIER_assert(s == ((a + 1) * (a + 1)));
    __VERIFIER_assert(((((t * t) - (4 * s)) + (2 * t)) + 1) == 0);
    if (!(s <= n))
      break;

    a = a + 1;
    t = t + 2;
    s = s + t;
  }

  __VERIFIER_assert(t == ((2 * a) + 1));
  __VERIFIER_assert(s == ((a + 1) * (a + 1)));
  __VERIFIER_assert(((((t * t) - (4 * s)) + (2 * t)) + 1) == 0);
  return 0;
}

