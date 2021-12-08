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
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  while (x >= y)
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = x + 1;
      y = y + x;
    }
    else
    {
      x = x - z;
      y = y + (z * z);
      z = z - 1;
    }

  }

  return 0;
}

