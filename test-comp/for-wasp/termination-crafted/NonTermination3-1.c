extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i = __VERIFIER_nondet_int("i");
  int a[10];
  for (int n = 0; n < 10; ++n)
  {
    a[n] = __VERIFIER_nondet_int("a[n]");
  }

  while (__logand(__logand(0 <= i, i < 10), a[i] >= 0))
  {
    i = __VERIFIER_nondet_int("i");
    a[i] = 0;
  }

  return 0;
}

