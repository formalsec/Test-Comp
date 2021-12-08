extern int __VERIFIER_nondet_int(char *);
int main()
{
  int k = __VERIFIER_nondet_int("k");
  int a[1048];
  if (__logand(k >= 0, k < 1048))
  {
    if (__logand(a[0] == 23, a[k] == 42))
    {
      int x = __VERIFIER_nondet_int("x");
      while (x >= 0)
      {
        x = x - k;
      }

    }

  }

  return 0;
}

