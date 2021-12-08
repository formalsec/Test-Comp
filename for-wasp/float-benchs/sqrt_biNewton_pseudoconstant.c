extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sqrt_biNewton_pseudoconstant.c", 3, "reach_error");
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

double _EPS = 1e-6;
double SqrtR(double Input)
{
  double xn;
  double xnp1;
  double residu;
  double lsup;
  double linf;
  int i;
  int cond;
  if (Input <= 1.0)
    xn = 1.0;
  else
    xn = 1.0 / Input;

  xnp1 = xn;
  residu = (2.0 * _EPS) * (xn + xnp1);
  lsup = _EPS * (xn + xnp1);
  linf = -lsup;
  cond = __logor(residu > lsup, residu < linf);
  i = 0;
  while (cond)
  {
    double hn = 1. - ((Input * xn) * xn);
    xnp1 = xn + ((xn * (((8.0 * hn) + ((6.0 * hn) * hn)) + (((5.0 * hn) * hn) * hn))) / 16.0);
    residu = 2.0 * (xnp1 - xn);
    xn = xnp1;
    lsup = _EPS * (xn + xnp1);
    linf = -lsup;
    cond = __logor(residu > lsup, residu < linf);
    i++;
  }

  return 1.0 / xnp1;
}

int main()
{
  double d;
  double dd;
  double r;
  double epsilon = 1e-8;
  for (d = 1.; d <= 20.; d++)
  {
    dd = __VERIFIER_nondet_double("dd");
    assume_abort_if_not(__logand(dd >= (d - epsilon), dd <= (d + epsilon)));
    r = SqrtR(dd);
    __VERIFIER_assert(__logand(r >= 0.9, r <= 5.));
  }

  return 0;
}

