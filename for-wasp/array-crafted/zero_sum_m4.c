extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "zero_sum_m4.c", 3, "reach_error");
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

}

extern short __VERIFIER_nondet_short(char *);
short SIZE;
int main()
{
  SIZE = __VERIFIER_nondet_short("SIZE");
  if (SIZE > 1)
  {
    int i;
    short a[SIZE];
    long long sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
      a[i] = __VERIFIER_nondet_short("a[i]");
    }

    for (i = 0; i < SIZE; i++)
    {
      sum = sum + a[i];
    }

    for (i = 0; i < SIZE; i++)
    {
      sum = sum + a[i];
    }

    for (i = 0; i < SIZE; i++)
    {
      sum = sum + a[i];
    }

    for (i = 0; i < SIZE; i++)
    {
      sum = sum + a[i];
    }

    for (i = 0; i < SIZE; i++)
    {
      sum = sum - a[i];
    }

    for (i = 0; i < SIZE; i++)
    {
      sum = sum - a[i];
    }

    for (i = 0; i < SIZE; i++)
    {
      sum = sum - a[i];
    }

    for (i = 0; i < SIZE; i++)
    {
      sum = sum - a[i];
    }

    __VERIFIER_assert(sum == 0);
  }

  return 1;
}

