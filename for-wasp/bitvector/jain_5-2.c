extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "jain_5-2.c", 3, "reach_error");
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
  unsigned int x;
  unsigned int y;
  x = 0U;
  y = 4U;
  while (1)
  {
    x = x + y;
    y = y + 4U;
    __VERIFIER_assert(x != 30U);
  }

  return 0;
}

