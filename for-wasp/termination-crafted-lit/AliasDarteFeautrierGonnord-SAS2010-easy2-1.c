extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x = 12;
  int y = 0;
  int z = __VERIFIER_nondet_int("z");
  while (z > 0)
  {
    x = x + 1;
    y = y - 1;
    z = z - 1;
  }

  return 0;
}

