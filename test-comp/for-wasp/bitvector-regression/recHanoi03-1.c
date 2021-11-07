extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "recHanoi03-1.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
unsigned hanoi(int n)
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
  if (n < 1)
  {
    return 0;
  }

  unsigned result = hanoi(n);
  if (__logand((result + 1) > 0, (result + 1) == (1 << n)))
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

