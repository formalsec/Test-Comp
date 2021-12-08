extern int __VERIFIER_nondet_int(char *);
int p(int m, int n, int r)
{
  if (r > 0)
  {
    return p(m, r - 1, n);
  }
  else
  {
    if (n > 0)
    {
      return p(r, n - 1, m);
    }
    else
    {
      return m;
    }

  }

}

int main()
{
  int m = __VERIFIER_nondet_int("m");
  int n = __VERIFIER_nondet_int("n");
  int r = __VERIFIER_nondet_int("r");
  if (__logand(__logand(m >= 0, n >= 0), r >= 0))
  {
    p(m, n, r);
  }

  return 0;
}

