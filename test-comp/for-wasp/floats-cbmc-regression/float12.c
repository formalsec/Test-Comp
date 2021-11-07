extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float12.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
extern unsigned char __VERIFIER_nondet_uchar(char *);
int main()
{
  float f = __VERIFIER_nondet_float("f");
  double d;
  unsigned char x = __VERIFIER_nondet_uchar("x");
  d = f;
  if (f == x)
    if (!(d == x))
  {
    reach_error();
    abort();
  }


}

