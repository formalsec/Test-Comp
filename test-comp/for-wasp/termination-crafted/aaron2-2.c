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
  int tx;
  tx = __VERIFIER_nondet_int("tx");
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  while (__logand(x >= y, tx >= 0))
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = (x - 1) - tx;
    }
    else
    {
      y = (y + 1) + tx;
    }

  }

  return 0;
}

