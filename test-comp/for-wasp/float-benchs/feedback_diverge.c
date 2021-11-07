extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "feedback_diverge.c", 3, "reach_error");
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
  float A;
  float B;
  float X;
  int i;
  A = 0.f;
  B = 0.f;
  for (i = 0; i < 3600000; i++)
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      X = __VERIFIER_nondet_float("X");
      assume_abort_if_not(__logand(X >= (-20.f), X <= 20.f));
    }
    else
    {
      X = B;
    }

    B = B - ((((2.f * B) - A) - X) * 0.005f);
    A = X;
    wait_for_clock();
  }

  __VERIFIER_assert(__logand(A >= (-100.f), A <= 100.f));
  return 0;
}

