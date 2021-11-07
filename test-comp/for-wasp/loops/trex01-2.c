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

_Bool __VERIFIER_nondet_bool(char *);
int __VERIFIER_nondet_int(char *);
void f(int d)
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  int k = __VERIFIER_nondet_int("k");
  int z = 1;
  L1:
  if (!(k <= 1073741823))
    return;


  while (z < k)
  {
    z = 2 * z;
  }

  __VERIFIER_assert(z >= 1);
  L2:
  if (!__logand(x <= 1000000, x >= (-1000000)))
    return;


  if (!__logand(y <= 1000000, y >= (-1000000)))
    return;

  if (!__logand(k <= 1000000, k >= (-1000000)))
    return;

  while (__logand(x > 0, y > 0))
  {
    _Bool c = __VERIFIER_nondet_bool("c");
    if (c)
    {
      P1:
      x = x - d;

      y = __VERIFIER_nondet_bool("y");
      ;
      z = z - 1;
    }
    else
    {
      y = y - d;
    }

  }

}

int main()
{
  _Bool c = __VERIFIER_nondet_bool("c");
  if (c)
  {
    f(1);
  }
  else
  {
    f(2);
  }

  return 0;
}

