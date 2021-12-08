extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Fibonacci04.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int fibonacci(int n);
int main();
int fibonacci(int n)
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
    return fibonacci(n - 1) + fibonacci(n - 2);
  }


}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  int result = fibonacci(x);
  if (__logor(x != 5, result == 3))
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

