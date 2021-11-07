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
  unsigned int i;
  unsigned int j;
  unsigned int a;
  unsigned int b;
  int flag = __VERIFIER_nondet_int("flag");
  a = 0;
  b = 0;
  j = 1;
  if (flag)
  {
    i = 0;
  }
  else
  {
    i = 1;
  }

  while (__VERIFIER_nondet_int("while_1"))
  {
    a++;
    b += j - i;
    i += 2;
    if ((i % 2) == 0)
    {
      j += 2;
    }
    else
    {
      j++;
    }

  }

  if (flag)
  {
    __VERIFIER_assert(a == b);
  }

  return 0;
}

