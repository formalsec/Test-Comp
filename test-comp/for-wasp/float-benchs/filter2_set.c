extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "filter2_set.c", 3, "reach_error");
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
  double A1;
  double A2;
  double A3;
  double B1;
  double B2;
  int i;
  A1 = __VERIFIER_nondet_double("A1");
  A2 = __VERIFIER_nondet_double("A2");
  A3 = __VERIFIER_nondet_double("A3");
  B1 = __VERIFIER_nondet_double("B1");
  B2 = __VERIFIER_nondet_double("B2");
  assume_abort_if_not(__logand(A1 >= 0.69, A1 <= 0.71));
  assume_abort_if_not(__logand(A2 >= (-1.31), A2 <= (-1.29)));
  assume_abort_if_not(__logand(A3 >= 1.09, A3 <= 1.11));
  assume_abort_if_not(__logand(B1 >= 1.39, B1 <= 1.41));
  assume_abort_if_not(__logand(B2 >= (-0.71), B2 <= (-0.69)));
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
    S = ((((A1 * E) - (E0 * A2)) + (E1 * A3)) + (S0 * B1)) + (S1 * B2);
    __VERIFIER_assert(__logand(S >= (-100.), S <= 100.));
  }

  return 0;
}

