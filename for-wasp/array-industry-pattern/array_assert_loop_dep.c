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

int main()
{
  int i;
  int a[100000];
  for (i = 0; i < 100000; i++)
  {
    a[i] = 10;
  }

  for (i = 0; i < 100000; i++)
  {
    __VERIFIER_assert(a[i] == 10);
    if ((i + 1) != 15000)
      a[i + 1] = 20;

  }

  return 0;
}

