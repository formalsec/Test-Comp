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

typedef struct _components
{
  unsigned int negative : 1;
  unsigned int exponent : 8;
  unsigned int mantissa : 23;
} components;
typedef union _ieee754_float
{
  components ieee;
  float f;
} ieee754_float;
float returnsField(unsigned int index)
{
  ieee754_float c;
  c.ieee.negative = index & 0x1;
  c.ieee.exponent = 0;
  c.ieee.mantissa = 0;
  return c.f;
}

ieee754_float returnsStructure(unsigned int index)
{
  ieee754_float c;
  c.ieee.negative = index & 0x1;
  c.ieee.exponent = 0;
  c.ieee.mantissa = 0;
  return c;
}

void testOne(void)
{
  ieee754_float f1;
  ieee754_float f2;
  f1 = returnsStructure(0);
  f2 = returnsStructure(1);
  if (!(f1.ieee.negative != f2.ieee.negative))
  {
    reach_error();
    abort();
  }

  return;
}

void testTwo(void)
{
  ieee754_float f1;
  ieee754_float f2;
  f1 = returnsStructure(0);
  f2 = returnsStructure(1);
  if (!(f1.ieee.negative != f2.ieee.negative))
  {
    reach_error();
    abort();
  }

  f1.f = returnsField(0);
  f2.f = returnsField(1);
  if (!(f1.ieee.negative != f2.ieee.negative))
  {
    reach_error();
    abort();
  }

  return;
}

int testThree(void)
{
  ieee754_float f1;
  ieee754_float f2;
  f1.f = returnsField(0);
  f2.f = returnsField(1);
  if (!(f1.ieee.negative != f2.ieee.negative))
  {
    reach_error();
    abort();
  }

  return 1;
}

int main(void)
{
  testOne();
  testTwo();
  testThree();
  return 0;
}

