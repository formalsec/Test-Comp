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
  int c1 = 4000;
  int c2 = 2000;
  int c3 = 10000;
  int n;
  int v;
  int i;
  int k;
  int j;
  n = __VERIFIER_nondet_int("n");
  if (!__logand(0 <= n, n < 10))
    return 0;

  k = 0;
  i = 0;
  while (i < n)
  {
    i++;
    v = __VERIFIER_nondet_int("v");
    if (!__logand(0 <= v, n < 2))
      return 0;

    if (v == 0)
      k += c1;
    else
      if (v == 1)
      k += c2;
    else
      k += c3;


  }

  j = 0;
  while (j < n)
  {
    __VERIFIER_assert(k > 0);
    j++;
    k--;
  }

  return 0;
}

