extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a[1048];
  for (int i = 0; i < 1048; i++)
  {
    a[i] = __VERIFIER_nondet_int("a[i]");
  }

  while (a[1 + 2] >= 0)
  {
    a[3] = a[2 + 1] - 1;
  }

  return 0;
}

