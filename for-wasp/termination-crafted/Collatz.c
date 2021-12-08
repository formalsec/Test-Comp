extern int __VERIFIER_nondet_int(char *);
int main()
{
  int y = __VERIFIER_nondet_int("y");
  while (y > 1)
  {
    if ((y % 2) == 0)
    {
      y = y / 2;
    }
    else
    {
      y = (3 * y) + 1;
    }

  }

  return 0;
}

