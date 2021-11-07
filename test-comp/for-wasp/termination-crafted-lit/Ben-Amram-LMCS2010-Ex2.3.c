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
  while (__logand(__logand(x > 0, y > 0), z > 0))
  {
    if (y > x)
    {
      y = z;
      x = __VERIFIER_nondet_int("x");
      z = x - 1;
    }
    else
    {
      z = z - 1;
      x = __VERIFIER_nondet_int("x");
      y = x - 1;
    }

  }

  return 0;
}

