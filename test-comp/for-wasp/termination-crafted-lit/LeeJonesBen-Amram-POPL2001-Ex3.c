extern int __VERIFIER_nondet_int(char *);
int a(int m, int n)
{
  if (m <= 0)
  {
    return n + 1;
  }
  else
  {
    if (n <= 0)
    {
      return a(m - 1, 1);
    }
    else
    {
      return a(m - 1, a(m, n - 1));
    }

  }

}

int main()
{
  int m = __VERIFIER_nondet_int("m");
  int n = __VERIFIER_nondet_int("n");
  if (__logand(m >= 0, n >= 0))
  {
    a(m, n);
  }

  return 0;
}

