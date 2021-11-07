extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float-to-double2.c", 3, "reach_error");
}

int main(void)
{
  float f = -0x1.0p-127f;
  double d = -0x1.0p-127;
  double fp = (double) f;
  if (!(d == fp))
  {
    reach_error();
    abort();
  }

  return 0;
}

