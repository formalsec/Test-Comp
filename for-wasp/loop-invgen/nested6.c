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
  int i;
  int j;
  int k;
  int n;
  k = __VERIFIER_nondet_int("k");
  n = __VERIFIER_nondet_int("n");
  if (!(n < 1000000))
    return 0;

  if (k == n)
  {
  }
  else
  {
    goto END;
  }

  for (i = 0; i < n; i++)
  {
    for (j = 2 * i; j < n; j++)
    {
      if (__VERIFIER_nondet_int("if_1"))
      {
        for (k = j; k < n; k++)
        {
          __VERIFIER_assert(k >= (2 * i));
        }

      }
      else
      {
        __VERIFIER_assert(k >= n);
        __VERIFIER_assert(k <= n);
      }

    }

  }

  END:
  return 0;

}

