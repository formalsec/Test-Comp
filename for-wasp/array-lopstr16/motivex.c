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

}

extern short __VERIFIER_nondet_short(char *);
struct S
{
  unsigned short p;
  unsigned short q;
} a[10000];
int main()
{
  unsigned char k;
  int i;
  for (i = 0; i < 1000000; i++)
  {
    a[i].p = i;
    a[i].q = i;
  }

  for (i = 0; i < 1000000; i++)
  {
    if (__VERIFIER_nondet_short("if_1"))
    {
      k = __VERIFIER_nondet_short("k");
      a[i].p = k;
      a[i].q = k * k;
    }

  }

  for (i = 0; i < 1000000; i++)
  {
    __VERIFIER_assert(__logor(a[i].p == a[i].q, a[i].q == (a[i].p * a[i].p)));
  }

  return 0;
}

