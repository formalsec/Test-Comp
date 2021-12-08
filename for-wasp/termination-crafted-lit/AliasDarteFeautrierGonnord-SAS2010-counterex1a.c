typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int y;
  int n;
  int b;
  n = __VERIFIER_nondet_int("n");
  b = __VERIFIER_nondet_int("b");
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  while (__logand(__logand(x >= 0, 0 <= y), y <= n))
  {
    if (b == 0)
    {
      y = y + 1;
      if (__VERIFIER_nondet_int("if_1") != 0)
      {
        b = 1;
      }

    }
    else
    {
      y = y - 1;
      if (__VERIFIER_nondet_int("if_2") != 0)
      {
        x = x - 1;
        b = 0;
      }

    }

  }

  return 0;
}

