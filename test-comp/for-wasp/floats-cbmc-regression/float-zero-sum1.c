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

union mix
{
  float f;
  unsigned int i;
};
int f00(float a, float b)
{
  float sum = a + b;
  union mix m;
  m.f = sum;
  if (!(m.i != 0x80000000))
  {
    reach_error();
    abort();
  }

  return 1;
}

int main(void)
{
  f00(-0x1.6b890ep+29, 0x1.6b890ep+29);
  return 0;
}

