extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "divmul_diverge.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
extern float __VERIFIER_nondet_float(char *);
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
      abort();
    }

  }

  return;
}

void wait_for_clock()
{
}

int main()
{
  int i;
  float x;
  x = 0;
  for (i = 0; i < 3000000; i++)
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      x = __VERIFIER_nondet_float("x");
      assume_abort_if_not(__logand(x >= (-100.f), x <= 100.f));
    }

    x = x / 3.1f;
    x = x * 3.1f;
    wait_for_clock();
  }

  __VERIFIER_assert(__logand(x >= (-1000.f), x <= 1000.f));
  return 0;
}

