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
  int e = __VERIFIER_nondet_int("e");
  for (int j = 0; j < 100000; j++)
  {
    a[j] = __VERIFIER_nondet_int("a[j]");
  }

  int i = 0;
  while (__logand(i < 100000, a[i] != e))
  {
    i = i + 1;
  }

  int x;
  for (x = 0; x < i; x++)
  {
    __VERIFIER_assert(a[x] != e);
  }

  return 0;
}

