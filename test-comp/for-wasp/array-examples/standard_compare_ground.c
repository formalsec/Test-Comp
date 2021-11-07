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
int main()
{
  int a[100000];
  int b[100000];
  for (int j = 0; j < 100000; j++)
  {
    a[j] = __VERIFIER_nondet_int("a[j]");
    b[j] = __VERIFIER_nondet_int("b[j]");
  }

  int i = 0;
  int rv = 1;
  while (i < 100000)
  {
    if (a[i] != b[i])
    {
      rv = 0;
    }

    i = i + 1;
  }

  if (rv)
  {
    int x;
    for (x = 0; x < 100000; x++)
    {
      __VERIFIER_assert(a[x] == b[x]);
    }

  }

  return 0;
}

