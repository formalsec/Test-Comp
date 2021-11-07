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
typedef struct 
{
  int n;
} S;
void init(S a[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    a[i].n = __VERIFIER_nondet_int("n");
  }

}

int main()
{
  S a[1000000];
  int i;
  int flag;
  flag = 0;
  init(a, 1000000);
  for (i = 0; i < 1000000; i++)
  {
    if (a[i].n != 0)
    {
      flag = 1;
    }

  }

  for (i = 0; i < 1000000; i++)
  {
    if (flag == 0)
      __VERIFIER_assert(a[i].n == 0);

  }

  return 0;
}

