extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "double_req_bl_1231b.c", 3, "reach_error");
}

extern double __VERIFIER_nondet_double(char *);
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union 
{
  double value;
  struct 
  {
    __uint32_t lsw;
    __uint32_t msw;
  } parts;
} ieee_double_shape_type;
int isnan_double(double x)
{
  return x != x;
}

int __fpclassify_double(double x)
{
  __uint32_t msw;
  __uint32_t lsw;
  do
  {
    ieee_double_shape_type ew_u;
    ew_u.value = x;
    msw = ew_u.parts.msw;
    lsw = ew_u.parts.lsw;
  }
  while (0);
  if (__logor(__logand(msw == 0x00000000, lsw == 0x00000000), __logand(msw == 0x80000000, lsw == 0x00000000)))
    return 2;
  else
    if (__logor(__logand(msw >= 0x00100000, msw <= 0x7fefffff), __logand(msw >= 0x80100000, msw <= 0xffefffff)))
    return 4;
  else
    if (__logor(msw <= 0x000fffff, __logand(msw >= 0x80000000, msw <= 0x800fffff)))
    return 3;
  else
    if (__logor(__logand(msw == 0x7ff00000, lsw == 0x00000000), __logand(msw == 0xfff00000, lsw == 0x00000000)))
    return 1;
  else
    return 0;




}

double fmin_double(double x, double y)
{
  if (__fpclassify_double(x) == 0)
    return y;

  if (__fpclassify_double(y) == 0)
    return x;

  return (x < y) ? (x) : (y);
}

int main()
{
  double x = __VERIFIER_nondet_double("x");
  double y = 0.0 / 0.0;
  if (!isnan_double(x))
  {
    double res = fmin_double(x, y);
    if (res != x)
    {
      {
        reach_error();
      }
      return 1;
    }

  }

  return 0;
}

