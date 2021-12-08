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

int main()
{
  int a[100000];
  int i = 0;
  int x;
  int y;
  for (int i = 0; i < 100000; i++)
  {
    a[i] = __VERIFIER_nondet_int("a[i]");
  }

  i = 0;
  while (i < 100000)
  {
    int k = i + 1;
    int s = i;
    while (k < 100000)
    {
      if (a[k] < a[s])
      {
        s = k;
      }

      k = k + 1;
    }

    if (s != i)
    {
      int tmp = a[s];
      a[s] = a[i];
      a[i] = tmp;
    }

    for (x = 0; x < i; x++)
    {
      for (y = x + 1; y < i; y++)
      {
        __VERIFIER_assert(a[x] <= a[y]);
      }

    }

    for (x = i; x < 100000; x++)
    {
      __VERIFIER_assert(a[x] >= a[i]);
    }

    i = i + 1;
  }

  for (x = 0; x < 100000; x++)
  {
    for (y = x + 1; y < 100000; y++)
    {
      __VERIFIER_assert(a[x] <= a[y]);
    }

  }

  return 0;
}

