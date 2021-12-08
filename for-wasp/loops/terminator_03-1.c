extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "terminator_03-1.c", 3, "reach_error");
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

extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  if (y > 0)
  {
    while (x < 100)
    {
      x = x + y;
    }

  }

  __VERIFIER_assert(__logor(y <= 0, __logand(y < 0, x >= 100)));
  return 0;
}

