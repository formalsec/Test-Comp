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
  int x;
  int y;
  int z;
  int w;
  x = (y = (z = (w = 0)));
  while (__logand(__VERIFIER_nondet_int("while_1"), y < 10000))
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      x = x + 1;
      y = y + 100;
    }
    else
      if (__VERIFIER_nondet_int("if_2"))
    {
      if (x >= 4)
      {
        x = x + 1;
        y = y + 1;
      }

    }
    else
      if (__logand(y > (10 * w), z >= (100 * x)))
    {
      y = -y;
    }



    w = w + 1;
    z = z + 10;
  }

  __VERIFIER_assert(__logand(x >= 4, y <= 2));
  return 0;
}

