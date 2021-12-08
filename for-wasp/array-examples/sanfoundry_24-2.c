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
void printEven(int i)
{
  __VERIFIER_assert((i % 2) == 0);
}

void printOdd(int i)
{
  __VERIFIER_assert((i % 2) != 0);
}

int main()
{
  int array[100000];
  int i;
  int num = __VERIFIER_nondet_int("num");
  for (i = 0; i < num; i++)
  {
    array[i] = __VERIFIER_nondet_int("array[i]");
  }

  for (i = 0; i < num; i++)
  {
    if ((array[i] % 2) == 0)
    {
      printEven(array[i]);
    }

  }

  for (i = 0; i < num; i++)
  {
    if ((array[i] % 2) != 0)
    {
      printOdd(array[i]);
    }

  }

  return 0;
}

