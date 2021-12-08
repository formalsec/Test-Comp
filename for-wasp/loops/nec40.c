extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "nec40.c", 3, "reach_error");
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
char x[100];
char y[100];
int i;
int j;
int k;
int main()
{
  k = __VERIFIER_nondet_int("k");
  i = 0;
  while (x[i] != 0)
  {
    y[i] = x[i];
    i++;
  }

  y[i] = 0;
  if (__logand(k >= 0, k < i))
    if (y[k] != 0)
  {
    __VERIFIER_assert(0);
  }


  return 0;
}

