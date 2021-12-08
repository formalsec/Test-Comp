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
int main(void)
{
  int i;
  int j;
  L0:
  i = 0;

  L1:
  while (__logand(__VERIFIER_nondet_int("while_1"), i < 1000000))
  {
    i++;
  }


  if (i >= 100)
    STUCK:
  goto STUCK;


  j = 0;
  L2:
  while (__logand(__VERIFIER_nondet_int("while_2"), i < 1000000))
  {
    i++;
    j++;
  }


  if (j >= 100)
    goto STUCK;

  __VERIFIER_assert(i < 200);
  return 0;
}

