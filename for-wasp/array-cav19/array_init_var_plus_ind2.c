extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "array_init_var_plus_ind2.c", 3, "reach_error");
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
int N = 100000;
int main()
{
  int i;
  int j = 0;
  int k = 0;
  int a[N];
  for (i = 0; i < N; i++)
  {
    int x = __VERIFIER_nondet_int("x");
    if (x)
      break;

    a[i] = j;
    j = j + i;
    k = k - i;
  }

  for (int l = 1; l < i; l++)
    __VERIFIER_assert(a[l] >= k);

  return 0;
}
