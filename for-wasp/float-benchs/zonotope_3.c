extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "zonotope_3.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

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

float f(float x)
{
  return (2.f * x) - 3.f;
}

float g(float x)
{
  return (-x) + 5.f;
}

int main()
{
  int i;
  float x;
  float y;
  float z;
  float t;
  float u;
  float v;
  y = f(0.f);
  z = g(0.f);
  u = f(.75f);
  v = g(.25f);
  for (i = 1; i <= 100000; i++)
  {
    x = __VERIFIER_nondet_float("x");
    assume_abort_if_not(__logand(x >= 0.f, x <= (((float) i) / 100000.f)));
    y = f(x);
    z = g(x);
    u = f(v);
    v = g(u) / 2.f;
  }

  t = y + (2.f * z);
  __VERIFIER_assert(__logand(t >= 6.9f, t <= 7.1f));
  return 0;
}

