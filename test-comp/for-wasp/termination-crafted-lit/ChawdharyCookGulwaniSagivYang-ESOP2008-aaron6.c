typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int tx;
  int y;
  int ty;
  int n;
  x = __VERIFIER_nondet_int("x");
  tx = __VERIFIER_nondet_int("tx");
  y = __VERIFIER_nondet_int("y");
  ty = __VERIFIER_nondet_int("ty");
  n = __VERIFIER_nondet_int("n");
  if ((x + y) >= 0)
  {
    while (__logand(__logand(__logand(x <= n, x >= ((2 * tx) + y)), y >= (ty + 1)), x >= (tx + 1)))
    {
      if (__VERIFIER_nondet_int("if_1") != 0)
      {
        tx = x;
        ty = y;
        x = __VERIFIER_nondet_int("x");
        y = __VERIFIER_nondet_int("y");
      }
      else
      {
        tx = x;
        x = __VERIFIER_nondet_int("x");
      }

    }

  }

  return 0;
}

