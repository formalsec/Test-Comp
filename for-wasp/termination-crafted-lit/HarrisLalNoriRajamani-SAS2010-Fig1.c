extern int __VERIFIER_nondet_int(char *);
void f(int d)
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  int k = __VERIFIER_nondet_int("k");
  int z = 1;
  if (k > 1073741823)
  {
    return;
  }

  L1:
  while (z < k)
  {
    z = 2 * z;
  }


  L2:
  while (__logand(x > 0, y > 0))
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      P1:
      x = x - d;

      y = __VERIFIER_nondet_int("y");
      z = z - 1;
    }
    else
    {
      y = y - d;
    }

  }


}

int main()
{
  if (__VERIFIER_nondet_int("if_2"))
  {
    f(1);
  }
  else
  {
    f(2);
  }

}

