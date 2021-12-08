extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "McCarthy91-2.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int f91(int x)
{
  if (x > 100)
    return x - 10;
  else
  {
    return f91(f91(x + 11));
  }

}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  int result = f91(x);
  if (__logor(result == 91, __logand(x > 101, result == (x - 10))))
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

