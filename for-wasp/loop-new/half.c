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
  int i = 0;
  int n = 0;
  int k = __VERIFIER_nondet_int("k");
  if (!__logand(k <= 1000000, k >= (-1000000)))
    return 0;

  for (i = 0; i < (2 * k); i++)
  {
    if ((i % 2) == 0)
    {
      n++;
    }

  }

  __VERIFIER_assert(__logor(k < 0, n == k));
  return 0;
}

