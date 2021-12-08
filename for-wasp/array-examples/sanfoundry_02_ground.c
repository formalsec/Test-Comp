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

}

extern int __VERIFIER_nondet_int(char *);
int main()
{
  int array[100000];
  int i;
  int largest1;
  int largest2;
  int temp;
  for (i = 0; i < 100000; i++)
  {
    array[i] = __VERIFIER_nondet_int("array[i]");
  }

  largest1 = array[0];
  largest2 = array[1];
  if (largest1 < largest2)
  {
    temp = largest1;
    largest1 = largest2;
    largest2 = temp;
  }

  for (i = 2; i < 100000; i++)
  {
    if (array[i] >= largest1)
    {
      largest2 = largest1;
      largest1 = array[i];
    }
    else
      if (array[i] > largest2)
    {
      largest2 = array[i];
    }


  }

  int x;
  for (x = 0; x < 100000; x++)
  {
    __VERIFIER_assert(array[x] <= largest1);
  }

  for (x = 0; x < 100000; x++)
  {
    __VERIFIER_assert(__logor(array[x] <= largest2, array[x] == largest1));
  }

  return 0;
}

