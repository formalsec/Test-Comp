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
  int i;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  i = __VERIFIER_nondet_int("i");
  while (x < y)
  {
    i = i + 1;
    if (z > x)
    {
      x = x + 1;
    }
    else
    {
      z = z + 1;
    }

  }

  return 0;
}

