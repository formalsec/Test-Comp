extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "jain_6-2.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
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
  int x;
  int y;
  int z;
  x = 0;
  y = 0;
  z = 0;
  while (1)
  {
    x = x + (2 * __VERIFIER_nondet_int("x"));
    y = y + (4 * __VERIFIER_nondet_int("y"));
    z = z + (8 * __VERIFIER_nondet_int("z"));
    __VERIFIER_assert((((4 * x) + (2 * y)) + z) != 4);
  }

  return 0;
}

