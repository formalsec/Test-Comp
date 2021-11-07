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

extern unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  int sn = 0;
  unsigned int loop1 = __VERIFIER_nondet_uint("loop1");
  unsigned int n1 = __VERIFIER_nondet_uint("n1");
  unsigned int x = 0;
  while (1)
  {
    if (x < 10)
    {
      sn = sn + 2;
    }

    x++;
    __VERIFIER_assert(__logor(sn == (x * 2), sn == 0));
  }

}

