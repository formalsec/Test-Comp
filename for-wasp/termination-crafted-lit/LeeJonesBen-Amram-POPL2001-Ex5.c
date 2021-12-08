extern int __VERIFIER_nondet_int(char *);
int f(int x, int y)
{
  if (y == 0)
  {
    return x;
  }
  else
  {
    if (x == 0)
    {
      return f(y, y - 1);
    }
    else
    {
      return f(y, x - 1);
    }

  }

}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  if (__logand(x >= 0, y >= 0))
  {
    f(x, y);
  }

  return 0;
}

