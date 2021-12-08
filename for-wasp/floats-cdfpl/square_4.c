extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

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
int main()
{
  float IN = __VERIFIER_nondet_float("IN");
  assume_abort_if_not(__logand(IN >= 0.0f, IN < 1.0f));
  float x = IN;
  float result = (((1.0f + (0.5f * x)) - ((0.125f * x) * x)) + (((0.0625f * x) * x) * x)) - ((((0.0390625f * x) * x) * x) * x);
  if (!__logand(result >= 0.0f, result < 1.39844f))
  {
    reach_error();
  }

  return 0;
}

