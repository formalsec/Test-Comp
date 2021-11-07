int SIZE = 50000001;
int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "loopv1.c", 7, "reach_error");
}

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

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
  int n;
  int i;
  int j;
  n = __VERIFIER_nondet_int("n");
  if (!(n <= SIZE))
    return 0;

  i = 0;
  j = 0;
  while (i < n)
  {
    if (__VERIFIER_nondet_int("if_1"))
      i = i + 6;
    else
      i = i + 3;

  }

  __VERIFIER_assert((i % 3) == 0);
  return 0;
}

