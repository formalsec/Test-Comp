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

extern int __VERIFIER_nondet_int(char *);
int N;
int main()
{
  N = __VERIFIER_nondet_int("N");
  if (N > 0)
  {
    int i;
    int k;
    int a[N];
    i = 0;
    k = 0;
    while (i < N)
    {
      a[k] = k;
      i = i + 1;
      k = k + 1;
    }

    i = 0;
    while (i < N)
    {
      __VERIFIER_assert(a[i] == i);
      i = i + 1;
    }

  }

  return 0;
}

