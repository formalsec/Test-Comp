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
  int n;
  int a;
  int b;
  i = 0;
  a = 0;
  b = 0;
  n = __VERIFIER_nondet_int("n");
  if (!__logand(n >= 0, n <= 1000000))
    return 0;

  while (i < n)
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      a = a + 1;
      b = b + 2;
    }
    else
    {
      a = a + 2;
      b = b + 1;
    }

    i = i + 1;
  }

  __VERIFIER_assert((a + b) == (3 * n));
  return 0;
}

