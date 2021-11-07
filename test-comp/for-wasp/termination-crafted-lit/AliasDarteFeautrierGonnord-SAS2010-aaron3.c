extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  int z = __VERIFIER_nondet_int("z");
  int tx = __VERIFIER_nondet_int("tx");
  while (__logand(x >= y, x <= (tx + z)))
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      z = z - 1;
      tx = x;
      x = __VERIFIER_nondet_int("x");
    }
    else
    {
      y = y + 1;
    }

  }

  return 0;
}

