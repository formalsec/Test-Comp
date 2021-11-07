extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Fibonacci02.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
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
  int x = 9;
  int result = fibonacci(x);
  if (result == 34)
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

