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
void reach_error(void)
{
  assert(0);
}

extern int __VERIFIER_nondet_int(char *);
extern _Bool __VERIFIER_nondet_bool(char *);
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    reach_error();
  }

}

int main()
{
  int i = __VERIFIER_nondet_int("i");
  int n = __VERIFIER_nondet_int("n");
  int k = __VERIFIER_nondet_int("k");
  _Bool flag = __VERIFIER_nondet_bool("flag");
  i = 0;
  if (!__logand(n > 0, n < 10))
    return 0;

  while (i < n)
  {
    i++;
    if (flag)
      k += 4000;
    else
      k += 2000;

  }

  __VERIFIER_assert(k > n);
  return 0;
}

