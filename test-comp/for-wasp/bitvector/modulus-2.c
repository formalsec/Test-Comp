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

extern unsigned int __VERIFIER_nondet_uint(char *);
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

int main()
{
  unsigned int n = __VERIFIER_nondet_uint("n");
  unsigned int s = __VERIFIER_nondet_uint("s");
  unsigned int d;
  unsigned int m;
  assume_abort_if_not(s < 31);
  d = (1 << s) - 1;
  if (d > 0)
  {
    m = n;
    while (n > d)
    {
      m = 0;
      while (n > 0)
      {
        m += n & d;
        n = n >> s;
      }

      n = m;
    }

    if (m == d)
    {
      m = 0;
    }

    __VERIFIER_assert(m == (n % d));
  }

  return 0;
}

