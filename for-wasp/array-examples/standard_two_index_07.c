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
  int j = 0;
  while (i < 100000)
  {
    b[i] = __VERIFIER_nondet_int("b[i]");
    i = i + 1;
  }

  i = 1;
  while (i < 100000)
  {
    a[j] = b[i];
    i = i + 7;
    j = j + 1;
  }

  i = 1;
  j = 0;
  while (i < 100000)
  {
    __VERIFIER_assert(a[j] == b[(7 * j) + 1]);
    i = i + 7;
    j = j + 1;
  }

  return 0;
}

