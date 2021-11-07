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

extern int __VERIFIER_nondet_int(char *);
int max(int x[5])
{
  int i;
  long long ret;
  ret = 0;
  for (i = 0; i < 5; i++)
  {
    ret = (ret < x[i]) ? (x[i]) : (ret);
  }

  return ret;
}

int main()
{
  int x[5];
  int temp;
  int ret;
  int ret2;
  int ret5;
  for (int i = 0; i < 5; i++)
  {
    x[i] = __VERIFIER_nondet_int("x[i]");
  }

  ret = max(x);
  temp = x[0];
  x[0] = x[1];
  x[1] = temp;
  ret2 = max(x);
  temp = x[0];
  for (int i = 0; i < (5 - 1); i++)
  {
    x[i] = x[i + 1];
  }

  x[5 - 1] = temp;
  ret5 = max(x);
  if (__logor(ret != ret2, ret != ret5))
  {
    {
      reach_error();
    }
  }

  return 1;
}

