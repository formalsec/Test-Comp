extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float-no-simp6.c", 3, "reach_error");
}

void multiply(void)
{
  float f1 = 0x1.000000p-1f;
  float f2 = 0x1.fffffep-126f;
  float res = f1 * f2;
  if (!(res == 0x1.0p-126f))
  {
    reach_error();
    abort();
  }

}

void divide(void)
{
  float f1 = 0x1.000000p+1f;
  float f2 = 0x1.fffffep-126f;
  float res = f2 / f1;
  if (!(res == 0x1.0p-126f))
  {
    reach_error();
    abort();
  }

}

void cast(void)
{
  double d = 0x1.fffffep-127;
  float f = (float) d;
  if (!(f == 0x1.0p-126f))
  {
    reach_error();
    abort();
  }

}

int main()
{
  multiply();
  divide();
  cast();
}

