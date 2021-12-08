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
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  if (!__logand(i >= 0, i <= 1000000))
    return 0;

  if (!(j >= 0))
    return 0;

  int x = i;
  int y = j;
  int z = 0;
  while (x != 0)
  {
    x--;
    y -= 2;
    z++;
  }

  if (i == j)
  {
    __VERIFIER_assert(y == (-z));
  }

  return 0;
}

