extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Muller_Kahan.c", 3, "reach_error");
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
  double x0;
  double x1;
  double x2;
  int i;
  x0 = 11. / 2.;
  x1 = 61. / 11.;
  for (i = 0; i < 100; i++)
  {
    x2 = 111. - ((1130. - (3000. / x0)) / x1);
    x0 = x1;
    x1 = x2;
  }

  __VERIFIER_assert(__logand(x0 >= 99., x0 <= 101.));
  return 0;
}

