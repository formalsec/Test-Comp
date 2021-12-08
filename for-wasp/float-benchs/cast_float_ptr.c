extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "cast_float_ptr.c", 3, "reach_error");
}

extern double __VERIFIER_nondet_double(char *);
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
}

float cast(double d)
{
  double dmax;
  float f;
  if ((((*((unsigned *) (&d))) & 0x7FF00000) >> 20) == 2047)
    return 0.f;

  ((unsigned *) (&dmax))[0] = 0x47efffff;
  ((unsigned *) (&dmax))[1] = 0xe0000000;
  if (d > dmax)
  {
    *((unsigned *) (&f)) = 0x7f7fffff;
  }
  else
    if ((-d) > dmax)
  {
    *((unsigned *) (&f)) = 0xff7fffff;
  }
  else
  {
    __VERIFIER_assert(__logand(d >= (-3.41e38), d <= 3.41e38));
    f = d;
  }


  return f;
}

int main()
{
  double a;
  float r;
  a = __VERIFIER_nondet_double("a");
  r = cast(a);
  return 0;
}

