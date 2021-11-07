extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sum02-1.c", 3, "reach_error");
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

extern unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  unsigned int i;
  unsigned int n = __VERIFIER_nondet_uint("n");
  unsigned int sn = 0;
  for (i = 0; i <= n; i++)
  {
    sn = sn + i;
  }

  __VERIFIER_assert(__logor(sn == ((n * (n + 1)) / 2), sn == 0));
}

