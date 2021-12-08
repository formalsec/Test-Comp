extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sumt2.c", 3, "reach_error");
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

int SIZE = 20000001;
unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  unsigned int n;
  unsigned int i;
  unsigned int j;
  unsigned int l = 0;
  n = __VERIFIER_nondet_uint("n");
  if (!(n <= SIZE))
    return 0;

  i = 0;
  j = 0;
  l = 0;
  while (l < n)
  {
    if (!(l % 2))
      i = i + 1;
    else
      j = j + 1;

    l = l + 1;
  }

  __VERIFIER_assert((i + j) == l);
  return 0;
}

