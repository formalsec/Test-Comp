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
  int pvlen;
  int tmp___1;
  int k = 0;
  int n;
  i = 0;
  pvlen = __VERIFIER_nondet_int("pvlen");
  while (__logand(__VERIFIER_nondet_int("while_1"), i <= 1000000))
  {
    i = i + 1;
  }

  if (i > pvlen)
  {
    pvlen = i;
  }

  i = 0;
  while (__logand(__VERIFIER_nondet_int("while_2"), i <= 1000000))
  {
    tmp___1 = i;
    i = i + 1;
    k = k + 1;
  }

  int j = 0;
  n = i;
  while (1)
  {
    __VERIFIER_assert(k >= 0);
    k = k - 1;
    i = i - 1;
    j = j + 1;
    if (j >= n)
    {
      break;
    }

  }

  return 0;
}

