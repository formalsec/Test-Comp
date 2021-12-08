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
struct _S
{
  int n;
};
typedef struct _S S;
S a[1000000];
S b[1000000];
S c[1000000];
int main()
{
  int i;
  for (i = 0; i < 1000000; i++)
  {
    int v;
    v = __VERIFIER_nondet_int("v");
    a[i].n = v;
    v = __VERIFIER_nondet_int("v");
    b[i].n = v;
  }

  for (i = 0; i < 1000000; i++)
  {
    c[i].n = a[i].n + b[i].n;
  }

  for (i = 0; i < 1000000; i++)
  {
    __VERIFIER_assert(c[i].n == (a[i].n + b[i].n));
  }

  return 0;
}

