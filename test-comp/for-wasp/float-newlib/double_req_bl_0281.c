extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "double_req_bl_0281.c", 3, "reach_error");
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

static const double one_sqrt = 1.0;
static const double tiny_sqrt = 1.0e-300;
double __ieee754_sqrt(double x)
{
  double z;
  __int32_t sign = 0x80000000;
  __uint32_t r;
  __uint32_t t1;
  __uint32_t s1;
  __uint32_t ix1;
  __uint32_t q1;
  __int32_t ix0;
  __int32_t s0;
  __int32_t q;
  __int32_t m;
  __int32_t t;
  __int32_t i;
  do
  {
    ieee_double_shape_type ew_u;
    ew_u.value = x;
    ix0 = ew_u.parts.msw;
    ix1 = ew_u.parts.lsw;
  }
  while (0);
  if ((ix0 & 0x7ff00000) == 0x7ff00000)
  {
    return (x * x) + x;
  }

  if (ix0 <= 0)
  {
    if (((ix0 & (~sign)) | ix1) == 0)
      return x;
    else
      if (ix0 < 0)
      return (x - x) / (x - x);


  }

  m = ix0 >> 20;
  if (m == 0)
  {
    while (ix0 == 0)
    {
      m -= 21;
      ix0 |= ix1 >> 11;
      ix1 <<= 21;
    }

    for (i = 0; (ix0 & 0x00100000) == 0; i++)
      ix0 <<= 1;

    m -= i - 1;
    ix0 |= ix1 >> (32 - i);
    ix1 <<= i;
  }

  m -= 1023;
  ix0 = (ix0 & 0x000fffff) | 0x00100000;
  if (m & 1)
  {
    ix0 += ix0 + ((ix1 & sign) >> 31);
    ix1 += ix1;
  }

  m >>= 1;
  ix0 += ix0 + ((ix1 & sign) >> 31);
  ix1 += ix1;
  q = (q1 = (s0 = (s1 = 0)));
  r = 0x00200000;
  while (r != 0)
  {
    t = s0 + r;
    if (t <= ix0)
    {
      s0 = t + r;
      ix0 -= t;
      q += r;
    }

    ix0 += ix0 + ((ix1 & sign) >> 31);
    ix1 += ix1;
    r >>= 1;
  }

  r = sign;
  while (r != 0)
  {
    t1 = s1 + r;
    t = s0;
    if (__logor(t < ix0, __logand(t == ix0, t1 <= ix1)))
    {
      s1 = t1 + r;
      if (__logand((t1 & sign) == sign, (s1 & sign) == 0))
        s0 += 1;

      ix0 -= t;
      if (ix1 < t1)
        ix0 -= 1;

      ix1 -= t1;
      q1 += r;
    }

    ix0 += ix0 + ((ix1 & sign) >> 31);
    ix1 += ix1;
    r >>= 1;
  }

  if ((ix0 | ix1) != 0)
  {
    z = one_sqrt - tiny_sqrt;
    if (z >= one_sqrt)
    {
      z = one_sqrt + tiny_sqrt;
      if (q1 == ((__uint32_t) 0xffffffff))
      {
        q1 = 0;
        q += 1;
      }
      else
        if (z > one_sqrt)
      {
        if (q1 == ((__uint32_t) 0xfffffffe))
          q += 1;

        q1 += 2;
      }
      else
        q1 += q1 & 1;


    }

  }

  ix0 = (q >> 1) + 0x3fe00000;
  ix1 = q1 >> 1;
  if ((q & 1) == 1)
    ix1 |= sign;

  ix0 += m << 20;
  do
  {
    ieee_double_shape_type iw_u;
    iw_u.parts.msw = ix0;
    iw_u.parts.lsw = ix1;
    z = iw_u.value;
  }
  while (0);
  return z;
}

double fabs_double(double x)
{
  __uint32_t high;
  do
  {
    ieee_double_shape_type gh_u;
    gh_u.value = x;
    high = gh_u.parts.msw;
  }
  while (0);
  do
  {
    ieee_double_shape_type sh_u;
    sh_u.value = x;
    sh_u.parts.msw = high & 0x7fffffff;
    x = sh_u.value;
  }
  while (0);
  return x;
}

static const double one_asin = 1.00000000000000000000e+00;
static const double huge_asin = 1.000e+300;
static const double pio2_hi_asin = 1.57079632679489655800e+00;
static const double pio2_lo_asin = 6.12323399573676603587e-17;
static const double pio4_hi_asin = 7.85398163397448278999e-01;
static const double pS0_asin = 1.66666666666666657415e-01;
static const double pS1_asin = -3.25565818622400915405e-01;
static const double pS2_asin = 2.01212532134862925881e-01;
static const double pS3_asin = -4.00555345006794114027e-02;
static const double pS4_asin = 7.91534994289814532176e-04;
static const double pS5_asin = 3.47933107596021167570e-05;
static const double qS1_asin = -2.40339491173441421878e+00;
static const double qS2_asin = 2.02094576023350569471e+00;
static const double qS3_asin = -6.88283971605453293030e-01;
static const double qS4_asin = 7.70381505559019352791e-02;
double __ieee754_asin(double x)
{
  double t;
  double w;
  double p;
  double q;
  double c;
  double r;
  double s;
  __int32_t hx;
  __int32_t ix;
  do
  {
    ieee_double_shape_type gh_u;
    gh_u.value = x;
    hx = gh_u.parts.msw;
  }
  while (0);
  ix = hx & 0x7fffffff;
  if (ix >= 0x3ff00000)
  {
    __uint32_t lx;
    do
    {
      ieee_double_shape_type gl_u;
      gl_u.value = x;
      lx = gl_u.parts.lsw;
    }
    while (0);
    if (((ix - 0x3ff00000) | lx) == 0)
      return (x * pio2_hi_asin) + (x * pio2_lo_asin);

    return (x - x) / (x - x);
  }
  else
    if (ix < 0x3fe00000)
  {
    if (ix < 0x3e400000)
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


  w = one_asin - fabs_double(x);
  t = w * 0.5;
  p = t * (pS0_asin + (t * (pS1_asin + (t * (pS2_asin + (t * (pS3_asin + (t * (pS4_asin + (t * pS5_asin))))))))));
  q = one_asin + (t * (qS1_asin + (t * (qS2_asin + (t * (qS3_asin + (t * qS4_asin)))))));
  s = __ieee754_sqrt(t);
  if (ix >= 0x3FEF3333)
  {
    w = p / q;
    t = pio2_hi_asin - ((2.0 * (s + (s * w))) - pio2_lo_asin);
  }
  else
  {
    w = s;
    do
    {
      ieee_double_shape_type sl_u;
      sl_u.value = w;
      sl_u.parts.lsw = 0;
      w = sl_u.value;
    }
    while (0);
    c = (t - (w * w)) / (s + w);
    r = p / q;
    p = ((2.0 * s) * r) - (pio2_lo_asin - (2.0 * c));
    q = pio4_hi_asin - (2.0 * w);
    t = pio4_hi_asin - (p - q);
  }

  if (hx > 0)
    return t;
  else
    return -t;

}

int main()
{
  double x = __VERIFIER_nondet_double("x");
  if (__logand(x < (-1.0), x > 1.0))
  {
    double res = __ieee754_asin(x);
    if (!isnan_double(res))
    {
      {
        reach_error();
      }
      return 1;
    }

  }

  return 0;
}

