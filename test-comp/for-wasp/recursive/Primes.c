extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "Primes.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int mult(int n, int m)
{
  if (m < 0)
  {
    return mult(n, -m);
  }

  if (m == 0)
  {
    return 0;
  }

  if (m == 1)
  {
    return 1;
  }

  return n + mult(n, m - 1);
}

int multiple_of(int n, int m)
{
  if (m < 0)
  {
    return multiple_of(n, -m);
  }

  if (n < 0)
  {
    return multiple_of(-n, m);
  }

  if (m == 0)
  {
    return 0;
  }

  if (n == 0)
  {
    return 1;
  }

  return multiple_of(n - m, m);
}

int is_prime_(int n, int m);
int is_prime(int n);
int is_prime(int n)
{
  return is_prime_(n, n - 1);
}

int is_prime_(int n, int m)
{
  if (n <= 1)
  {
    return 0;
  }

  if (n == 2)
  {
    return 1;
  }

  if (n > 2)
  {
    if (m <= 1)
    {
      return 1;
    }
    else
    {
      if (multiple_of(n, m) == 0)
      {
        return 0;
      }

      return is_prime_(n, m - 1);
    }

  }

}

int main()
{
  int n = __VERIFIER_nondet_int("n");
  if (__logor(n < 1, n > 46340))
  {
    return 0;
  }

  int result = is_prime(n);
  int f1 = __VERIFIER_nondet_int("f1");
  if (__logor(f1 < 1, f1 > 46340))
  {
    return 0;
  }

  int f2 = __VERIFIER_nondet_int("f2");
  if (__logor(f2 < 1, f2 > 46340))
  {
    return 0;
  }

  if (__logand(__logand(__logand(result == 1, mult(f1, f2) == n), f1 > 1), f2 > 1))
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

