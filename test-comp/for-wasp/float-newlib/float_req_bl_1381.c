extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float_req_bl_1381.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union 
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;
float copysign_float(float x, float y)
{
  __uint32_t ix;
  __uint32_t iy;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    ix = gf_u.word;
  }
  while (0);
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = y;
    iy = gf_u.word;
  }
  while (0);
  do
  {
    ieee_float_shape_type sf_u;
    sf_u.word = (ix & 0x7fffffff) | (iy & 0x80000000);
    x = sf_u.value;
  }
  while (0);
  return x;
}

int isnan_float(float x)
{
  return x != x;
}

int main()
{
  float x = 0.0f / 0.0f;
  float y = __VERIFIER_nondet_float("y");
  float res = copysign_float(x, y);
  if (!isnan_float(res))
  {
    {
      reach_error();
    }
    return 1;
  }

  return 0;
}

