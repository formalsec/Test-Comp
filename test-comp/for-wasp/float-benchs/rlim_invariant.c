extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "rlim_invariant.c", 3, "reach_error");
}

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

int main()
{
  float X;
  float Y;
  float S;
  float R;
  float D;
  int i;
  Y = 0;
  for (i = 0; i < 100000; i++)
  {
    X = __VERIFIER_nondet_float("X");
    D = __VERIFIER_nondet_float("D");
    assume_abort_if_not(__logand(X >= (-128.f), X <= 128.f));
    assume_abort_if_not(__logand(D >= 0.f, D <= 16.f));
    S = Y;
    Y = X;
    R = X - S;
    if (R <= (-D))
      Y = S - D;
    else
      if (R >= D)
      Y = S + D;


    __VERIFIER_assert(__logand(Y >= (-129.f), Y <= 129.f));
  }

  return 0;
}

