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
  if ((2 * y) >= z)
  {
    while (__logand(x >= 0, z == 1))
    {
      x = (x - (2 * y)) + 1;
    }

  }

  return 0;
}

