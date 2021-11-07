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

  return;
}

int main()
{
  unsigned int array[1000];
  unsigned int index;
  for (index = 0; index < 1000; index++)
  {
    array[index] = index % 2;
  }

  for (index = 0; index < 1000; index++)
  {
    if ((index % 2) == 0)
    {
      __VERIFIER_assert(array[index] == 0);
    }
    else
    {
      __VERIFIER_assert(array[index] != 0);
    }

  }

}

