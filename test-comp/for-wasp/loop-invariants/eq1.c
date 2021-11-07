extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "eq1.c", 3, "reach_error");
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
  unsigned int w = __VERIFIER_nondet_uint("w");
  unsigned int x = w;
  unsigned int y = __VERIFIER_nondet_uint("y");
  unsigned int z = y;
  while (__VERIFIER_nondet_uint("while_1"))
  {
    if (__VERIFIER_nondet_uint("if_1"))
    {
      ++w;
      ++x;
    }
    else
    {
      --y;
      --z;
    }

  }

  __VERIFIER_assert(__logand(w == x, y == z));
  return 0;
}

