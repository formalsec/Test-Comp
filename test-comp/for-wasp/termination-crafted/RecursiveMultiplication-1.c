extern int __VERIFIER_nondet_int(char *);
int mult(int n, int m)
{
  if (m < 0)
  {
    return (-1) * mult(n, -m);
  }

  if (m == 0)
  {
    return 0;
  }

  return n + mult(n, m - 1);
}

int main()
{
  int m = __VERIFIER_nondet_int("m");
  int n = __VERIFIER_nondet_int("n");
  if (!__logand((-65535) <= m, m <= 65535))
    return 0;

  if (!__logand((-65535) <= n, n <= 65535))
    return 0;

  int res = mult(m, n);
  return 0;
}

