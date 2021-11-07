extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sanfoundry_10_ground.c", 3, "reach_error");
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
  int i;
  int n = 100000;
  int pos;
  int element = __VERIFIER_nondet_int("element");
  int found = 0;
  int vectorx[n];
  for (i = 0; i < n; i++)
  {
    vectorx[i] = __VERIFIER_nondet_int("vectorx[i]");
  }

  for (i = 0; __logand(i < n, !found); i++)
  {
    if (vectorx[i] == element)
    {
      found = 1;
      pos = i;
    }

  }

  if (found)
  {
    for (i = pos; i < (n - 1); i++)
    {
      vectorx[i] = vectorx[i + 1];
    }

  }

  if (found)
  {
    int x;
    for (x = 0; x < pos; x++)
    {
      __VERIFIER_assert(vectorx[x] != element);
    }

  }

  return 0;
}

