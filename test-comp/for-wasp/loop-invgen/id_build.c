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

  return;
}

int __VERIFIER_nondet_int();
int main()
{
  int offset;
  int length;
  int nlen = __VERIFIER_nondet_int("nlen");
  int i;
  int j;
  for (i = 0; i < nlen; i++)
  {
    for (j = 0; j < 8; j++)
    {
      __VERIFIER_assert(0 <= ((nlen - 1) - i));
      __VERIFIER_assert(((nlen - 1) - i) < nlen);
    }

  }

  return 0;
}

