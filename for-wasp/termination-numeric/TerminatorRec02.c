extern int __VERIFIER_nondet_int(char *);
int fact(int x)
{
  if (x > 1)
  {
    int y = fact(x - 1);
    return y * x;
  }

  return 1;
}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return 0;

  int y = __VERIFIER_nondet_int("y");
  if (y < 0)
    return 0;

  int z = __VERIFIER_nondet_int("z");
  fact(x);
}

