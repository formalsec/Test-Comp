extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "addsub_float_inexact.c", 3, "reach_error");
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

int main()
{
  float x;
  float y;
  float z;
  float r;
  x = 1e8f;
  y = x + 1.f;
  z = x - 1.f;
  r = y - z;
  __VERIFIER_assert(r == 0.f);
  return 0;
}

