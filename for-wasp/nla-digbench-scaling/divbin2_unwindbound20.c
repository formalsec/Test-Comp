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

extern unsigned __VERIFIER_nondet_uint(char *);
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
    }

  }

  return;
}

int counter = 0;
int main()
{
  unsigned A;
  unsigned B;
  unsigned q;
  unsigned r;
  unsigned b;
  A = __VERIFIER_nondet_uint("A");
  B = 1;
  q = 0;
  r = A;
  b = B;
  while ((counter++) < 20)
  {
    if (!(r >= b))
      break;

    b = 2 * b;
  }

  while ((counter++) < 20)
  {
    __VERIFIER_assert(A == ((q * b) + r));
    if (!(b != B))
      break;

    q = 2 * q;
    b = b / 2;
    if (r >= b)
    {
      q = q + 1;
      r = r - b;
    }

  }

  __VERIFIER_assert(A == ((q * b) + r));
  return 0;
}

