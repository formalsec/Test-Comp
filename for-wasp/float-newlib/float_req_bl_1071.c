extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float_req_bl_1071.c", 4, "reach_error");
}

typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union 
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;
float trunc_float(float x)
{
  __int32_t signbit;
  __int32_t w;
  __int32_t exponent_less_127;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    w = gf_u.word;
  }
  while (0);
  signbit = w & 0x80000000;
  exponent_less_127 = ((w & 0x7f800000) >> 23) - 127;
  if (exponent_less_127 < 23)
  {
    if (exponent_less_127 < 0)
    {
      do
      {
        ieee_float_shape_type sf_u;
        sf_u.word = signbit;
        x = sf_u.value;
      }
      while (0);
    }
    else
    {
      do
      {
        ieee_float_shape_type sf_u;
        sf_u.word = signbit | (w & (~(0x007fffff >> exponent_less_127)));
        x = sf_u.value;
      }
      while (0);
    }

  }
  else
  {
    if (exponent_less_127 == 255)
      return x + x;

  }

  return x;
}

int isnan_float(float x)
{
  return x != x;
}

int main()
{
  float x = 0.0f / 0.0f;
  float res = trunc_float(x);
  if (!isnan_float(res))
  {
    {
      reach_error();
    }
    return 1;
  }

  return 0;
}

