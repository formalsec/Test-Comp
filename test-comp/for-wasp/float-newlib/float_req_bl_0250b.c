extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float_req_bl_0250b.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef union 
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;
static const float huge_floor = 1.0e30;
float floor_float(float x)
{
  __int32_t i0;
  __int32_t j0;
  __uint32_t i;
  __uint32_t ix;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    i0 = gf_u.word;
  }
  while (0);
  ix = i0 & 0x7fffffff;
  j0 = (ix >> 23) - 0x7f;
  if (j0 < 23)
  {
    if (j0 < 0)
    {
      if ((huge_floor + x) > ((float) 0.0))
      {
        if (i0 >= 0)
        {
          i0 = 0;
        }
        else
          if (!(ix == 0))
        {
          i0 = 0xbf800000;
        }


      }

    }
    else
    {
      i = 0x007fffff >> j0;
      if ((i0 & i) == 0)
        return x;

      if ((huge_floor + x) > ((float) 0.0))
      {
        if (i0 < 0)
          i0 += 0x00800000 >> j0;

        i0 &= ~i;
      }

    }

  }
  else
  {
    if (!(ix < 0x7f800000L))
      return x + x;
    else
      return x;

  }

  do
  {
    ieee_float_shape_type sf_u;
    sf_u.word = i0;
    x = sf_u.value;
  }
  while (0);
  return x;
}

int isnan_float(float x)
{
  return x != x;
}

static const float one_sqrt = 1.0;
static const float tiny_sqrt = 1.0e-30;
float __ieee754_sqrtf(float x)
{
  float z;
  __uint32_t r;
  __uint32_t hx;
  __int32_t ix;
  __int32_t s;
  __int32_t q;
  __int32_t m;
  __int32_t t;
  __int32_t i;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    ix = gf_u.word;
  }
  while (0);
  hx = ix & 0x7fffffff;
  if (!(hx < 0x7f800000L))
    return (x * x) + x;

  if (hx == 0)
    return x;

  if (ix < 0)
    return (x - x) / (x - x);

  m = ix >> 23;
  if (hx < 0x00800000L)
  {
    for (i = 0; (ix & 0x00800000L) == 0; i++)
      ix <<= 1;

    m -= i - 1;
  }

  m -= 127;
  ix = (ix & 0x007fffffL) | 0x00800000L;
  if (m & 1)
    ix += ix;

  m >>= 1;
  ix += ix;
  q = (s = 0);
  r = 0x01000000L;
  while (r != 0)
  {
    t = s + r;
    if (t <= ix)
    {
      s = t + r;
      ix -= t;
      q += r;
    }

    ix += ix;
    r >>= 1;
  }

  if (ix != 0)
  {
    z = one_sqrt - tiny_sqrt;
    if (z >= one_sqrt)
    {
      z = one_sqrt + tiny_sqrt;
      if (z > one_sqrt)
        q += 2;
      else
        q += q & 1;

    }

  }

  ix = (q >> 1) + 0x3f000000L;
  ix += m << 23;
  do
  {
    ieee_float_shape_type sf_u;
    sf_u.word = ix;
    z = sf_u.value;
  }
  while (0);
  return z;
}

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

static const float one_asin = 1.0000000000e+00;
static const float huge_asin = 1.000e+30;
static const float pio2_hi_asin = 1.57079637050628662109375f;
static const float pio2_lo_asin = -4.37113900018624283e-8f;
static const float pio4_hi_asin = 0.785398185253143310546875f;
static const float pS0_asin = 1.6666667163e-01;
static const float pS1_asin = -3.2556581497e-01;
static const float pS2_asin = 2.0121252537e-01;
static const float pS3_asin = -4.0055535734e-02;
static const float pS4_asin = 7.9153501429e-04;
static const float pS5_asin = 3.4793309169e-05;
static const float qS1_asin = -2.4033949375e+00;
static const float qS2_asin = 2.0209457874e+00;
static const float qS3_asin = -6.8828397989e-01;
static const float qS4_asin = 7.7038154006e-02;
float __ieee754_asinf(float x)
{
  float t;
  float w;
  float p;
  float q;
  float c;
  float r;
  float s;
  __int32_t hx;
  __int32_t ix;
  do
  {
    ieee_float_shape_type gf_u;
    gf_u.value = x;
    hx = gf_u.word;
  }
  while (0);
  ix = hx & 0x7fffffff;
  if (ix == 0x3f800000)
  {
    return (x * pio2_hi_asin) + (x * pio2_lo_asin);
  }
  else
    if (ix > 0x3f800000)
  {
    return (x - x) / (x - x);
  }
  else
    if (ix < 0x3f000000)
  {
    if (ix < 0x32000000)
    {
      if ((huge_asin + x) > one_asin)
        return x;

    }
    else
    {
      t = x * x;
      p = t * (pS0_asin + (t * (pS1_asin + (t * (pS2_asin + (t * (pS3_asin + (t * (pS4_asin + (t * pS5_asin))))))))));
      q = one_asin + (t * (qS1_asin + (t * (qS2_asin + (t * (qS3_asin + (t * qS4_asin)))))));
      w = p / q;
      return x + (x * w);
    }

  }



  w = one_asin - fabs_float(x);
  t = w * ((float) 0.5);
  p = t * (pS0_asin + (t * (pS1_asin + (t * (pS2_asin + (t * (pS3_asin + (t * (pS4_asin + (t * pS5_asin))))))))));
  q = one_asin + (t * (qS1_asin + (t * (qS2_asin + (t * (qS3_asin + (t * qS4_asin)))))));
  s = __ieee754_sqrtf(t);
  if (ix >= 0x3F79999A)
  {
    w = p / q;
    t = pio2_hi_asin - ((((float) 2.0) * (s + (s * w))) - pio2_lo_asin);
  }
  else
  {
    __int32_t iw;
    w = s;
    do
    {
      ieee_float_shape_type gf_u;
      gf_u.value = w;
      iw = gf_u.word;
    }
    while (0);
    do
    {
      ieee_float_shape_type sf_u;
      sf_u.word = iw & 0xfffff000;
      w = sf_u.value;
    }
    while (0);
    c = (t - (w * w)) / (s + w);
    r = p / q;
    p = ((((float) 2.0) * s) * r) - (pio2_lo_asin - (((float) 2.0) * c));
    q = pio4_hi_asin - (((float) 2.0) * w);
    t = pio4_hi_asin - (p - q);
  }

  if (hx > 0)
    return t;
  else
    return -t;

}

int main()
{
  float x = (-1.0f) / 0.0f;
  float res = __ieee754_asinf(x);
  if (!isnan_float(res))
  {
    {
      reach_error();
    }
    return 1;
  }

  return 0;
}

