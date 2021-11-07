extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "EvenOdd03.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int isOdd(int n);
int isEven(int n);
int isOdd(int n)
{
  if (n == 0)
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
    return isEven(n - 1);
  }


}

int isEven(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
    if (n == 1)
  {
    return 0;
  }
  else
  {
    return isOdd(n - 1);
  }


}

int main()
{
  int n = __VERIFIER_nondet_int("n");
  if (n < 0)
  {
    return 0;
  }

  int result = isEven(n);
  int mod = n % 2;
  if (__logor(result < 0, result == mod))
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

