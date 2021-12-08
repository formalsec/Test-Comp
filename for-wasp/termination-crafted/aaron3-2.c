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
  int z;
  int tx;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  tx = __VERIFIER_nondet_int("tx");
  while (__logand(x >= y, x <= (tx + z)))
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
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

