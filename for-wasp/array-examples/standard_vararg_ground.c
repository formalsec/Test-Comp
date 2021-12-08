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
  int aa[100000];
  int a = 0;
  for (int i = 0; i < 100000; i++)
  {
    aa[i] = __VERIFIER_nondet_int("aa[i]");
  }

  while (aa[a] >= 0)
  {
    a++;
  }

  int x;
  for (x = 0; x < a; x++)
  {
    __VERIFIER_assert(aa[x] >= 0);
  }

  return 0;
}

