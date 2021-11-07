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
  unsigned int array[100000];
  unsigned int index1;
  unsigned int index2;
  unsigned int loop_entered = 0;
  index1 = __VERIFIER_nondet_uint("index1");
  assume_abort_if_not(index1 < 100000);
  index2 = __VERIFIER_nondet_uint("index2");
  assume_abort_if_not(index2 < 100000);
  while (index1 < index2)
  {
    __VERIFIER_assert(__logand(index1 < 100000, index2 < 100000));
    assume_abort_if_not(array[index1] == array[index2]);
    index1++;
    index2--;
    loop_entered = 1;
  }

  if (loop_entered)
  {
    while (index2 < index1)
    {
      __VERIFIER_assert(array[index1] == array[index2]);
      index2++;
      index1--;
    }

  }

}

