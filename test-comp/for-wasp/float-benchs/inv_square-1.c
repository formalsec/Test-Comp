extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "inv_square-1.c", 3, "reach_error");
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
  float x;
  float y;
  float z;
  x = __VERIFIER_nondet_float("x");
  assume_abort_if_not(__logand(x >= (-1.f), x <= 1.f));
  if (x != 0.f)
  {
    y = x * x;
    __VERIFIER_assert(y != 0.f);
    z = 1.f / y;
  }

  return 0;
}

