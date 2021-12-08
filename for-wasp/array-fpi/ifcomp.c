extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "ifcomp.c", 10, "reach_error");
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
  long long i;
  long long *a = malloc((sizeof(long long)) * N);
  long long *b = malloc((sizeof(long long)) * N);
  long long *c = malloc((sizeof(long long)) * N);
  for (i = 0; i < N; i++)
  {
    if (i == 0)
    {
      a[0] = 6;
    }
    else
    {
      a[i] = a[i - 1] + 6;
    }

  }

  for (i = 0; i < N; i++)
  {
    if (i == 0)
    {
      b[0] = 1;
    }
    else
    {
      b[i] = b[i - 1] + a[i - 1];
    }

  }

  for (i = 0; i < N; i++)
  {
    if (i == 0)
    {
      c[0] = 0;
    }
    else
    {
      c[i] = c[i - 1] + b[i - 1];
    }

  }

  for (i = 0; i < N; i++)
  {
    __VERIFIER_assert(c[i] == ((i * i) * i));
  }

  return 1;
}

