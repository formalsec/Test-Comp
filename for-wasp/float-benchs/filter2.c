extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "filter2.c", 3, "reach_error");
}

extern double __VERIFIER_nondet_double(char *);
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

int main()
{
  double E;
  double E0;
  double E1;
  double S0;
  double S1;
  double S;
  int i;
  E = __VERIFIER_nondet_double("E");
  E0 = __VERIFIER_nondet_double("E0");
  assume_abort_if_not(__logand(E >= 0., E <= 1.));
  assume_abort_if_not(__logand(E0 >= 0., E0 <= 1.));
  S0 = 0;
  S = 0;
  for (i = 0; i <= 1000000; i++)
  {
    E1 = E0;
    E0 = E;
    E = __VERIFIER_nondet_double("E");
    assume_abort_if_not(__logand(E >= 0., E <= 1.));
    S1 = S0;
    S0 = S;
    S = ((((0.7 * E) - (E0 * 1.3)) + (E1 * 1.1)) + (S0 * 1.4)) - (S1 * 0.7);
    __VERIFIER_assert(__logand(S >= (-4.), S <= 4.));
  }

  return 0;
}

