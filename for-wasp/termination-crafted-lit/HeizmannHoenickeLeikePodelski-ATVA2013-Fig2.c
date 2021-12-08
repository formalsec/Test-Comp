extern int __VERIFIER_nondet_int(char *);
int main()
{
  int y = __VERIFIER_nondet_int("y");
  int x = y + 42;
  while (x >= 0)
  {
    y = (2 * y) - x;
    x = (y + x) / 2;
  }

  return 0;
}

