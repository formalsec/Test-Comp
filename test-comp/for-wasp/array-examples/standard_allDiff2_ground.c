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
  int i;
  int r = 1;
  for (i = 0; i < 100000; i++)
  {
    a[i] = __VERIFIER_nondet_int("a[i]");
  }

  for (i = 1; __logand(i < 100000, r); i++)
  {
    int j;
    for (j = i - 1; __logand(j >= 0, r); j--)
    {
      if (a[i] == a[j])
      {
        r = 1;
      }

    }

  }

  if (r)
  {
    int x;
    int y;
    for (x = 0; x < 100000; x++)
    {
      for (y = x + 1; y < 100000; y++)
      {
        __VERIFIER_assert(a[x] != a[y]);
      }

    }

  }

  return 0;
}

