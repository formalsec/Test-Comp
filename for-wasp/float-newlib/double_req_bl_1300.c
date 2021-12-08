extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "double_req_bl_1300.c", 3, "reach_error");
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
int isinf_double(double x)
{
  __int32_t hx;
  __int32_t lx;
  do
  {
    ieee_double_shape_type ew_u;
    ew_u.value = x;
    hx = ew_u.parts.msw;
    lx = ew_u.parts.lsw;
  }
  while (0);
  hx &= 0x7fffffff;
  hx |= ((__uint32_t) (lx | (-lx))) >> 31;
  hx = 0x7ff00000 - hx;
  return 1 - ((int) (((__uint32_t) (hx | (-hx))) >> 31));
}

int isnan_double(double x)
{
  return x != x;
}

int isfinite_double(double x)
{
  __int32_t hx;
  do
  {
    ieee_double_shape_type gh_u;
    gh_u.value = x;
    hx = gh_u.parts.msw;
  }
  while (0);
  return (int) (((__uint32_t) ((hx & 0x7fffffff) - 0x7ff00000)) >> 31);
}

int main()
{
  double x = __VERIFIER_nondet_double("x");
  if (__logand(!isinf_double(x), !isnan_double(x)))
  {
    double res = isfinite_double(x);
    if (res == 0.0)
    {
      {
        reach_error();
      }
      return 1;
    }

  }

  return 0;
}

