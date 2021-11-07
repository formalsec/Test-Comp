extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "recHanoi03-2.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int hanoi(int n)
{
  if (n == 1)
  {
    return 1;
  }

  return (2 * hanoi(n - 1)) + 1;
}

int main()
{
  int n = __VERIFIER_nondet_int("n");
  if (__logor(n < 1, n > 31))
  {
    return 0;
  }

  int result = hanoi(n);
  if (result >= n)
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

