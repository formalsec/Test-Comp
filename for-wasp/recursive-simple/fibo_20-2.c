extern int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "fibo_20-2.c", 4, "reach_error");
}

int fibo(int n)
{
  if (n < 1)
  {
    return 0;
  }
  else
    if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibo(n - 1) + fibo(n - 2);
  }


}

int main(void)
{
  int x = 20;
  int result = fibo(x);
  if (result != 6765)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return 0;
}

