extern void abort(void);
void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
void reach_error()
{
  assert(0);
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

int __VERIFIER_nondet_int();
int main()
{
  int n;
  int l;
  int r;
  int i;
  int j;
  n = __VERIFIER_nondet_int("n");
  if (!__logand(1 <= n, n <= 1000000))
    return 0;

  l = (n / 2) + 1;
  r = n;
  if (l > 1)
  {
    l--;
  }
  else
  {
    r--;
  }

  while (r > 1)
  {
    i = l;
    j = 2 * l;
    while (j <= r)
    {
      if (j < r)
      {
        __VERIFIER_assert(1 <= j);
        __VERIFIER_assert(j <= n);
        __VERIFIER_assert(1 <= (j + 1));
        __VERIFIER_assert((j + 1) <= n);
        if (__VERIFIER_nondet_int("if_1"))
          j = j + 1;

      }

      __VERIFIER_assert(1 <= j);
      __VERIFIER_assert(j <= n);
      if (__VERIFIER_nondet_int("if_2"))
      {
        break;
      }

      __VERIFIER_assert(1 <= i);
      __VERIFIER_assert(i <= n);
      __VERIFIER_assert(1 <= j);
      __VERIFIER_assert(j <= n);
      i = j;
      j = 2 * j;
    }

    if (l > 1)
    {
      __VERIFIER_assert(1 <= l);
      __VERIFIER_assert(l <= n);
      l--;
    }
    else
    {
      __VERIFIER_assert(1 <= r);
      __VERIFIER_assert(r <= n);
      r--;
    }

  }

  return 0;
}

