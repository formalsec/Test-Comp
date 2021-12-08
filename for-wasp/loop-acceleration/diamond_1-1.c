extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "diamond_1-1.c", 3, "reach_error");
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
  unsigned int x = 0;
  unsigned int y = __VERIFIER_nondet_uint("y");
  while (x < 99)
  {
    if ((y % 2) == 0)
    {
      x += 2;
    }
    else
    {
      x++;
    }

  }

  __VERIFIER_assert((x % 2) == (y % 2));
}

