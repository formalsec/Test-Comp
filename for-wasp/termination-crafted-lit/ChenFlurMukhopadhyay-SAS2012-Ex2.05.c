extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  while (x < y)
  {
    x = x + y;
    y = y / 2;
  }

  return 0;
}

