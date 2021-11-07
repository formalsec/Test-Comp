extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a[1048];
  int k = 0;
  for (int i = 0; i < 1048; i++)
  {
    a[i] = __VERIFIER_nondet_int("a[i]");
  }

  while (__logand(k < 1048, a[k] >= 0))
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      k++;
    }
    else
    {
      a[k]--;
    }

  }

  return 0;
}

