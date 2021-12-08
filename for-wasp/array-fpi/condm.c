extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "condm.c", 10, "reach_error");
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
void *malloc(unsigned int size);
int N;
int main()
{
  N = __VERIFIER_nondet_int("N");
  if (N <= 0)
    return 1;

  assume_abort_if_not(N <= (2147483647 / (sizeof(int))));
  int i;
  int *a = malloc((sizeof(int)) * N);
  for (i = 0; i < N; i++)
  {
    a[i] = 0;
  }

  for (i = 0; i < N; i++)
  {
    if ((N % 2) == 0)
    {
      a[i] = a[i] + 2;
    }
    else
    {
      a[i] = a[i] + 1;
    }

  }

  for (i = 0; i < N; i++)
  {
    __VERIFIER_assert((a[i] % 2) == (N % 2));
  }

  return 1;
}

