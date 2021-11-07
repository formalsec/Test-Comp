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
  int A[100000];
  int B[100000];
  int C[100000];
  int i;
  int j = 0;
  for (i = 0; i < 100000; i++)
  {
    A[i] = __VERIFIER_nondet_int("A[i]");
    B[i] = __VERIFIER_nondet_int("B[i]");
  }

  for (i = 0; i < 100000; i++)
  {
    if (A[i] == B[i])
    {
      C[j] = i;
      j = j + 1;
    }

  }

  int x;
  for (x = 0; x < j; x++)
  {
    __VERIFIER_assert(C[x] <= ((x + i) - j));
  }

  for (x = 0; x < j; x++)
  {
    __VERIFIER_assert(C[x] >= x);
  }

  return 0;
}

