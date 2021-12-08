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
  int i = 0;
  for (i = 0; i < 100000; i++)
  {
    a[i] = __VERIFIER_nondet_int("a[i]");
  }

  i = 0;
  while (i < 100000)
  {
    if (a[i] >= 0)
      b[i] = 1;
    else
      b[i] = 0;

    i = i + 1;
  }

  int f = 1;
  i = 0;
  while (i < 100000)
  {
    if (__logand(a[i] >= 0, !b[i]))
      f = 0;

    if (__logand(a[i] < 0, b[i]))
      f = 0;

    i = i + 1;
  }

  __VERIFIER_assert(f);
  return 0;
}

