extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float_req_bl_1012a.c", 3, "reach_error");
}

typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union 
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;
float fabs_float(float x)
{
  __uint32_t ix;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    ix = gf_u.word;
  }
  while (0);
  do
  {
    ieee_float_shape_type sf_u;
    sf_u.word = ix & 0x7fffffff;
    x = sf_u.value;
  }
  while (0);
  return x;
}

int isinf_float(float x)
{
  __int32_t ix;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    ix = gf_u.word;
  }
  while (0);
  ix &= 0x7fffffff;
  return ix == 0x7f800000L;
}

int main()
{
  float x = 1.0f / 0.0f;
  float res = fabs_float(x);
  if (!isinf_float(res))
  {
    {
      reach_error();
    }
    return 1;
  }

  return 0;
}

