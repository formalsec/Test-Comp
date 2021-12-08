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
  int marker = __VERIFIER_nondet_int("marker");
  int pos = __VERIFIER_nondet_int("pos");
  for (int i = 0; i < 100000; i++)
  {
    a[i] = __VERIFIER_nondet_int("a[i]");
  }

  if (__logand(pos >= 0, pos < 100000))
  {
    a[pos] = marker;
    int i = 0;
    while (a[i] != marker)
    {
      i = i + 1;
    }

    __VERIFIER_assert(i <= pos);
  }

  return 0;
}

