extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  while (__logand(x > 0, y > 0))
  {
    int old_x = x;
    int old_y = y;
    if (__VERIFIER_nondet_int("if_1"))
    {
      x = old_x - 1;
      y = old_x;
    }
    else
    {
      x = old_y - 2;
      y = old_x + 1;
    }

  }

  return 0;
}

