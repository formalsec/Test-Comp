extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a_length = __VERIFIER_nondet_int("a_length");
  if (a_length < 1)
  {
    return 0;
  }

  int a[a_length];
  for (int j = 0; j < a_length; j++)
  {
    a[j] = __VERIFIER_nondet_int("a[j]");
  }

  int offset = 1;
  int i = 0;
  while (i < a_length)
  {
    if (a[i] < 0)
    {
      break;
    }

    i = (i + offset) + a[i];
  }

  return 0;
}

