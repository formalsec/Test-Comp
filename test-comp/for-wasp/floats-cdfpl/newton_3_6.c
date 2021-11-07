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

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

extern float __VERIFIER_nondet_float(char *);
float f(float x)
{
  return ((x - (((x * x) * x) / 6.0f)) + (((((x * x) * x) * x) * x) / 120.0f)) + (((((((x * x) * x) * x) * x) * x) * x) / 5040.0f);
}

float fp(float x)
{
  return ((1 - ((x * x) / 2.0f)) + ((((x * x) * x) * x) / 24.0f)) + ((((((x * x) * x) * x) * x) * x) / 720.0f);
}

int main()
{
  float IN = __VERIFIER_nondet_float("IN");
  assume_abort_if_not(__logand(IN > (-1.2f), IN < 1.2f));
  float x = IN - (f(IN) / fp(IN));
  x = x - (f(x) / fp(x));
  x = x - (f(x) / fp(x));
  if (!(x < 0.1))
  {
    reach_error();
  }

  return 0;
}

