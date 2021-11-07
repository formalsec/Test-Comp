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
  while (__logand(y > 0, x > 0))
  {
    if (x > y)
    {
      z = y;
    }
    else
    {
      z = x;
    }

    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      y = y + x;
      x = z - 1;
      z = y + z;
    }
    else
    {
      x = y + x;
      y = z - 1;
      z = x + z;
    }

  }

  return 0;
}

