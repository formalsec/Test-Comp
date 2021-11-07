extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "jain_6-1.c", 3, "reach_error");
}

extern unsigned int __VERIFIER_nondet_uint(char *);
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
  unsigned int x;
  unsigned int y;
  unsigned int z;
  x = 0U;
  y = 0U;
  z = 0U;
  while (1)
  {
    x = x + (2U * __VERIFIER_nondet_uint("x"));
    y = y + (4U * __VERIFIER_nondet_uint("y"));
    z = z + (8U * __VERIFIER_nondet_uint("z"));
    __VERIFIER_assert((((4U * x) + (2U * y)) + z) != 4U);
  }

  return 0;
}

