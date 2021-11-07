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

extern int __VERIFIER_nondet_int(char *);
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

struct S
{
  int p;
  int n;
};
struct S a[100000];
int main()
{
  int i;
  for (i = 0; i < 100000; i++)
  {
    int q = __VERIFIER_nondet_int("q");
    struct S s;
    s.n = __VERIFIER_nondet_int("n");
    if (s.n == 0)
    {
      s.p = 10;
    }
    else
    {
      s.p = 20;
    }

    a[i] = s;
  }

  a[3].p = 30;
  a[3].n = 40;
  for (i = 0; i < 100000; i++)
  {
    struct S s1 = a[i];
    if (__logand(i != 3, s1.n == 0))
    {
      __VERIFIER_assert(s1.p == 10);
    }

  }

  return 0;
}

