int SIZE = 40000;
int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sum_natnum.c", 7, "reach_error");
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
  int i;
  unsigned long long sum;
  i = 0, sum = 0;
  while (i < SIZE)
  {
    i = i + 1;
    sum += i;
  }

  __VERIFIER_assert(sum == ((SIZE * (SIZE + 1)) / 2));
  return 0;
}

