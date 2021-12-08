extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a[1048];
  int k = 0;
  while (__logand(a[k] >= 0, k < 1048))
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

