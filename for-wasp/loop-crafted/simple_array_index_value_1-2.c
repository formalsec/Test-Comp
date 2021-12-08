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

unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  unsigned int array[10000];
  unsigned int index = 0;
  unsigned int tmp = 0;
  while (1)
  {
    index = __VERIFIER_nondet_uint("index");
    if (index >= 10000)
    {
      break;
    }

    array[index] = index;
    tmp = index;
  }

  __VERIFIER_assert(__logand(tmp < 10000, array[tmp] == tmp));
}

