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

int main()
{
  int aa[100000];
  int a = 0;
  int b = 0;
  int c = 0;
  int bb[100000];
  int cc[100000];
  while (a < 100000)
  {
    aa[a] = __VERIFIER_nondet_int("aa[ a ]");
    if (aa[a] >= 0)
    {
      bb[b] = aa[a];
      b = b + 1;
    }

    a = a + 1;
  }

  a = 0;
  while (a < 100000)
  {
    if (aa[a] >= 0)
    {
      cc[c] = aa[a];
      c = c + 1;
    }

    a = a + 1;
  }

  int x;
  for (x = 0; x < b; x++)
  {
    __VERIFIER_assert(bb[x] >= 0);
  }

  for (x = 0; x < c; x++)
  {
    __VERIFIER_assert(cc[x] < 0);
  }

  return 0;
}

