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
  i = 1;
  j = 1;
  k = __VERIFIER_nondet_int("k");
  if (!__logand(0 <= k, k <= 1))
    return 0;

  while (i < 1000000)
  {
    i = i + 1;
    j = j + k;
    k = k - 1;
    __VERIFIER_assert(__logand(__logand(1 <= (i + k), (i + k) <= 2), i >= 1));
  }

  return 0;
}

