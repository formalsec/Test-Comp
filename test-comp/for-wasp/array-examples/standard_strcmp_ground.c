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
int _strcmp(int src[100000], int dst[100000])
{
  int i = 0;
  while (i < 100000)
  {
    if (dst[i] != src[i])
      return 1;

    i = i + 1;
  }

  return 0;
}

int main()
{
  int a[100000];
  int b[100000];
  for (int i = 0; i < 100000; i++)
  {
    a[i] = __VERIFIER_nondet_int("a[i]");
    b[i] = __VERIFIER_nondet_int("b[i]");
  }

  int c = _strcmp(a, b);
  if (c == 0)
  {
    int x;
    for (x = 0; x < 100000; x++)
    {
      __VERIFIER_assert(a[x] == b[x]);
    }

  }

  return 0;
}

