extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "array-1.c", 3, "reach_error");
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

int __VERIFIER_nondet_int(char *);
int main()
{
  unsigned int SIZE = 1;
  unsigned int j;
  unsigned int k;
  int array[SIZE];
  int menor;
  menor = __VERIFIER_nondet_int("menor");
  for (j = 0; j < SIZE; j++)
  {
    array[j] = __VERIFIER_nondet_int("array[j]");
    if (array[j] <= menor)
      menor = array[j];

  }

  __VERIFIER_assert(array[0] >= menor);
  return 0;
}

