extern int __VERIFIER_nondet_int(char *);
int twoWay(int terminate, int n)
{
  if (n < 0)
  {
    return 1;
  }
  else
  {
    int m = n;
    if (terminate)
    {
      m--;
    }
    else
    {
      m++;
    }

    return m * twoWay(terminate, m);
  }

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
  twoWay(1, x);
}

