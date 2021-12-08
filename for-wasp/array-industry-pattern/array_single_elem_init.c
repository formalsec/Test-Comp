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

int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int a[100000];
  int b[100000];
  int c[100000];
  for (i = 0; i < 100000; i++)
  {
    int q = __VERIFIER_nondet_int("q");
    a[i] = 0;
    if (q == 0)
    {
      a[i] = 1;
      b[i] = i % 2;
    }

    if (a[i] != 0)
    {
      if (b[i] == 0)
      {
        c[i] = 0;
      }
      else
      {
        c[i] = 1;
      }

    }

  }

  a[15000] = 1;
  for (i = 0; i < 100000; i++)
  {
    if (i == 15000)
    {
      __VERIFIER_assert(c[i] == 0);
    }

  }

  return 0;
}

