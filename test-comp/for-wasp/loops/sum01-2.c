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

extern void __VERIFIER_assert(int cond);
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

extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int n = __VERIFIER_nondet_int("n");
  int sn = 0;
  if (!__logand(n < 1000, n >= (-1000)))
    return 0;

  for (i = 1; i <= n; i++)
  {
    sn = sn + 2;
  }

  __VERIFIER_assert(__logor(sn == (n * 2), sn == 0));
}

