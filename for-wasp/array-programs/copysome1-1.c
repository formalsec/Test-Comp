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
  int a1[200000];
  int a2[200000];
  int i;
  int z;
  z = 150000;
  for (i = 0; i < 200000; i++)
  {
    a1[i] = __VERIFIER_nondet_int("a1[i]");
    a2[i] = __VERIFIER_nondet_int("a2[i]");
  }

  for (i = 0; i < 200000; i++)
  {
    if (i != z)
      a2[i] = a1[i];

  }

  int x;
  for (x = 0; x < 200000; x++)
  {
    if (x != z)
      __VERIFIER_assert(a1[x] == a2[x]);

  }

  return 0;
}

