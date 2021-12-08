extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "vnew1.c", 3, "reach_error");
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
  unsigned int k;
  n = __VERIFIER_nondet_uint("n");
  if (!(n <= SIZE))
    return 0;

  k = n;
  i = 0;
  while (i < n)
  {
    k--;
    i = i + 3;
  }

  int j = 0;
  while (j < (n / 3))
  {
    __VERIFIER_assert(k > 0);
    k--;
    j++;
  }

  return 0;
}

