extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "insertion_sort-1.c", 3, "reach_error");
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
extern int __VERIFIER_nondet_int(char *);
int main()
{
  unsigned int SIZE = __VERIFIER_nondet_uint("SIZE");
  int i;
  int j;
  int k;
  int key;
  int v[SIZE];
  for (j = 0; j < SIZE; j++)
    v[j] = __VERIFIER_nondet_int("v[j]");

  for (j = 1; j < SIZE; j++)
  {
    key = v[j];
    i = j - 1;
    while (__logand(i >= 0, v[i] > key))
    {
      if (i < 2)
        v[i + 1] = v[i];

      i = i - 1;
    }

    v[i + 1] = key;
  }

  for (k = 1; k < SIZE; k++)
    __VERIFIER_assert(v[k - 1] <= v[k]);

  return 0;
}

