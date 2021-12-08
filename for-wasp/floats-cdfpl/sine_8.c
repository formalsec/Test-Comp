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
int main()
{
  float IN = __VERIFIER_nondet_float("IN");
  assume_abort_if_not(__logand(IN > (-1.57079632679f), IN < 1.57079632679f));
  float x = IN;
  float result = ((x - (((x * x) * x) / 6.0f)) + (((((x * x) * x) * x) * x) / 120.0f)) + (((((((x * x) * x) * x) * x) * x) * x) / 5040.0f);
  if (!__logand(result <= 2.0f, result >= (-2.0f)))
  {
    reach_error();
  }

  return 0;
}

