extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x = 0;
  int y = 100;
  int z = __VERIFIER_nondet_int("z");
  while (x < 40)
  {
    if (z == 0)
    {
      x = x + 1;
    }
    else
    {
      x = x + 2;
    }

  }

  return 0;
}

