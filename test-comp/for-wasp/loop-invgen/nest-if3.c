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
  int k;
  int n;
  int l;
  n = __VERIFIER_nondet_int("n");
  l = __VERIFIER_nondet_int("l");
  if (!(l > 0))
    return 0;

  if (!(l < 1000000))
    return 0;

  if (!(n < 1000000))
    return 0;

  for (k = 1; k < n; k++)
  {
    for (i = l; i < n; i++)
    {
      __VERIFIER_assert(1 <= i);
    }

    if (__VERIFIER_nondet_int("if_1"))
      l = l + 1;

  }

}

