extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "loop-1.c", 3, "reach_error");
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
  x = 1.f;
  y = 1e7;
  z = 42.f;
  while (x < y)
  {
    x = x + 1.f;
    y = y - 1.f;
    z = z + 1.f;
  }

  __VERIFIER_assert(__logand(z >= 0.f, z <= 1e8));
  return 0;
}

