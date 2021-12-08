extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Addition02WithOverflowBug.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int addition(int m, int n)
{
  if (n == 0)
  {
    return m;
  }

  if (n > 0)
  {
    return addition(m + 1, n - 1);
  }

  if (n < 0)
  {
    return addition(m - 1, n + 1);
  }

}

int main()
{
  int m = __VERIFIER_nondet_int("m");
  int n = __VERIFIER_nondet_int("n");
  int result = addition(m, n);
  if (result == (m - n))
  {
    return 0;
  }
  else
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

