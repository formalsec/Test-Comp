extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sqrt_poly2.c", 3, "reach_error");
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

double C0 = 1.414213538;
double C1 = 0.229761391;
double C2 = 1.296735525;
double C3 = -0.901098370;
double C4 = 0.493553400;
double C5 = -0.118958666;
union u
{
  int i[2];
  double d;
};
double sqrt_custom(double a)
{
  union u x;
  double r;
  int exp;
  x.d = a;
  exp = (x.i[0] & 0x7FF00000) >> 20;
  x.i[0] = (x.i[0] & 0x800FFFFF) | 0x3FF00000;
  r = x.d * 0.5;
  r = (C1 + C2) + ((C3 + ((C4 + (C5 * r)) * r)) * r);
  if ((exp % 2) == 0)
  {
    exp++;
  }
  else
  {
    r = r * C0;
  }

  x.i[0] = ((exp / 2) + 511) << 20;
  r = r * x.d;
  return r;
}

int main()
{
  double x;
  double y;
  x = __VERIFIER_nondet_double("x");
  assume_abort_if_not(__logand(x >= 1., x <= 1e10));
  y = sqrt_custom(x);
  __VERIFIER_assert(__logand(y >= 0., y <= 1e6));
  return 0;
}

