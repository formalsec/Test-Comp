extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "array_init_nondet_vars.c", 3, "reach_error");
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

extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int j = __VERIFIER_nondet_int("j");
  int n = __VERIFIER_nondet_int("n");
  assume_abort_if_not(n < 100000);
  int a[n];
  assume_abort_if_not(__logand(j > 0, j < 10000));
  for (i = 1; i < n; i++)
  {
    int k = __VERIFIER_nondet_int("k");
    assume_abort_if_not(__logand(k > 0, k < 10000));
    a[i] = (i + j) + k;
  }

  for (i = 1; i < n; i++)
    __VERIFIER_assert(a[i] >= (i + 2));

  return 0;
}

