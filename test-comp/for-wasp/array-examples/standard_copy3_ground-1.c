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
  int a1[100000];
  int a2[100000];
  int a3[100000];
  int a4[100000];
  int a;
  for (a = 0; a < 100000; a++)
  {
    a1[a] = __VERIFIER_nondet_int("a1[a]");
  }

  int i;
  for (i = 0; i < 100000; i++)
  {
    a2[i] = a1[i];
  }

  for (i = 0; i < 100000; i++)
  {
    a3[i] = a2[i];
  }

  for (i = 0; i < 100000; i++)
  {
    a4[i] = a3[i];
  }

  int x;
  for (x = 0; x < 100000; x++)
  {
    __VERIFIER_assert(a1[x] == a4[x]);
  }

  return 0;
}

