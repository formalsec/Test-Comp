extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "zonotope_2.c", 3, "reach_error");
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
  float x = 12.f;
  float x1 = 12.f;
  float y = 16.f;
  float y1 = 16.f;
  int i;
  for (i = 0; i < 100000; i++)
  {
    x = x1;
    y = y1;
    x1 = ((3.f * x) / 4.f) + (y / 4.f);
    y1 = (x / 4.f) + ((3.f * y) / 4.f);
    __VERIFIER_assert(__logand(x1 >= 0.f, x1 <= 100.f));
    __VERIFIER_assert(__logand(y1 >= 0.f, y1 <= 100.f));
  }

  __VERIFIER_assert(__logand((x1 - y1) >= (-0.1f), (x1 - y1) <= 0.1f));
  return 0;
}

