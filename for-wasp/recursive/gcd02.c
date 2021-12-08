extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "gcd02.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int gcd(int y1, int y2)
{
  if (__logor(y1 <= 0, y2 <= 0))
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  if (y1 == y2)
  {
    return y1;
  }

  if (y1 > y2)
  {
    return gcd(y1 - y2, y2);
  }

  return gcd(y1, y2 - y1);
}

int divides(int n, int m)
{
  if (m == 0)
  {
    return 1;
  }

  if (n > m)
  {
    return 0;
  }

  return divides(n, m - n);
}

int main()
{
  int m = __VERIFIER_nondet_int("m");
  if (__logor(m <= 0, m > 2147483647))
  {
    return 0;
  }

  int n = __VERIFIER_nondet_int("n");
  if (__logor(n <= 0, n > 2147483647))
  {
    return 0;
  }

  if (__logand(m > 0, n > 0))
  {
    int z = gcd(m, n);
    if (divides(z, m) == 0)
    {
      ERROR:
      {
        reach_error();
        abort();
      }

    }
    else
    {
      return 0;
    }

  }

}

