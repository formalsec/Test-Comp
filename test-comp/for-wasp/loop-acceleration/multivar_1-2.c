extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "multivar_1-2.c", 3, "reach_error");
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

int main(void)
{
  unsigned int x = __VERIFIER_nondet_uint("x");
  unsigned int y = x + 1;
  while (x < 1024)
  {
    x++;
    y++;
  }

  __VERIFIER_assert(x == y);
}

