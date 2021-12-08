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
  int a = __VERIFIER_nondet_int("a");
  int b = __VERIFIER_nondet_int("b");
  int res;
  int cnt;
  if (!(a <= 1000000))
    return 0;

  if (!__logand(0 <= b, b <= 1000000))
    return 0;

  res = a;
  cnt = b;
  while (cnt > 0)
  {
    cnt = cnt - 1;
    res = res + 1;
  }

  __VERIFIER_assert(res == (a + b));
  return 0;
}

