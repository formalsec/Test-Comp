extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a[1048];
  a[2] = __VERIFIER_nondet_int("a[2]");
  while (a[2] >= 0)
  {
    a[2] = a[2] - 1;
    a[1 + 1] = __VERIFIER_nondet_int("a_[1+1]");
  }

  return 0;
}

