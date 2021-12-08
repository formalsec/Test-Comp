extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "jain_2-2.c", 3, "reach_error");
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
  x = 1;
  y = 1;
  while (1)
  {
    x = x + (2 * __VERIFIER_nondet_int("x"));
    y = y + (2 * __VERIFIER_nondet_int("y"));
    __VERIFIER_assert((x + y) != 1);
  }

  return 0;
}

