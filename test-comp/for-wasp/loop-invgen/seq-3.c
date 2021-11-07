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
  int n0;
  int n1;
  int i0 = 0;
  int k = 0;
  n0 = __VERIFIER_nondet_int("n0");
  n1 = __VERIFIER_nondet_int("n1");
  if (!__logand((-1000000) <= n0, n0 < 1000000))
    return 0;

  if (!__logand((-1000000) <= n1, n1 < 1000000))
    return 0;

  while (i0 < n0)
  {
    i0++;
    k++;
  }

  int i1 = 0;
  while (i1 < n1)
  {
    i1++;
    k++;
  }

  int j1 = 0;
  while (j1 < (n0 + n1))
  {
    __VERIFIER_assert(k > 0);
    j1++;
    k--;
  }

}

