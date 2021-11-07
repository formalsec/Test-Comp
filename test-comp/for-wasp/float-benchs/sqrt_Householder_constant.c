extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sqrt_Householder_constant.c", 3, "reach_error");
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
    xnp1 = (xn * (15. + (((Input * xn) * xn) * ((-10.) + (((3. * Input) * xn) * xn))))) / 8.;
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
  double r;
  for (d = 1.; d <= 20.; d++)
  {
    r = SqrtR(d);
    __VERIFIER_assert(__logand(r >= 1.0, r <= 5.0));
  }

  return 0;
}

