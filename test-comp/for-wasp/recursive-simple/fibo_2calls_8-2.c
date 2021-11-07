extern int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "fibo_2calls_8-2.c", 4, "reach_error");
}

int fibo1(int n);
int fibo2(int n);
int fibo1(int n)
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
    return fibo2(n - 1) + fibo2(n - 2);
  }


}

int fibo2(int n)
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
    return fibo1(n - 1) + fibo1(n - 2);
  }


}

int main(void)
{
  int x = 8;
  int result = fibo1(x);
  if (result == 21)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return 0;
}

