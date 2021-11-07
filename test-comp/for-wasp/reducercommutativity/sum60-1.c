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

int sum(int x[60])
{
  int i;
  long long ret;
  ret = 0;
  for (i = 0; i < 60; i++)
  {
    ret = ret + x[i];
  }

  return ret;
}

int main()
{
  int x[60];
  int temp;
  int ret;
  int ret2;
  int ret5;
  ret = sum(x);
  temp = x[0];
  x[0] = x[1];
  x[1] = temp;
  ret2 = sum(x);
  temp = x[0];
  for (int i = 0; i < (60 - 1); i++)
  {
    x[i] = x[i + 1];
  }

  x[60 - 1] = temp;
  ret5 = sum(x);
  if (__logor(ret != ret2, ret != ret5))
  {
    {
      reach_error();
    }
  }

  return 1;
}

