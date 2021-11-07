extern void abort(void);
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

extern float __VERIFIER_nondet_float(char *);
extern double __VERIFIER_nondet_double(char *);
void bug(float min)
{
  if (!(min == 0x1.fffffep-105f))
  {
    abort();
  }

  float modifier = 0x1.0p-23 * (1 << 1);
  float ulpdiff = min * modifier;
  if (!(ulpdiff == 0x1p-126f))
  {
    reach_error();
    abort();
  }

  return;
}

void bugBrokenOut(float min)
{
  if (!(min == 0x1.fffffep-105f))
  {
    abort();
  }

  float modifier = 0x1.0p-23 * (1 << 1);
  double dulpdiff = ((double) min) * ((double) modifier);
  float ulpdiff = (float) dulpdiff;
  if (!(ulpdiff == 0x1p-126f))
  {
    reach_error();
    abort();
  }

  return;
}

void bugCasting(double d)
{
  if (!(d == 0x1.fffffep-127))
  {
    abort();
  }

  float f = (float) d;
  if (!(f == 0x1p-126f))
  {
    reach_error();
    abort();
  }

  return;
}

int main(void)
{
  float f = __VERIFIER_nondet_float("f");
  bug(f);
  float g = __VERIFIER_nondet_float("g");
  bugBrokenOut(g);
  double d = __VERIFIER_nondet_double("d");
  bugCasting(d);
  return 1;
}

