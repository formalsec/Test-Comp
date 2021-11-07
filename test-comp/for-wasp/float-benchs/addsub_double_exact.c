extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "addsub_double_exact.c", 3, "reach_error");
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
  double x;
  double y;
  double z;
  double r;
  x = 1e8;
  y = x + 1;
  z = x - 1;
  r = y - z;
  __VERIFIER_assert(r == 2.);
  return 0;
}

