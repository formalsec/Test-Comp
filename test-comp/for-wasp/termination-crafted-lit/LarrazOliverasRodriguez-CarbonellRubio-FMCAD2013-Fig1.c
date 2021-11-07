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
  if (__logand(__logand(__logand(x <= 10000, x >= (-10000)), y <= 10000), z <= 10000))
  {
    while (y >= 1)
    {
      x = x - 1;
      while (y < z)
      {
        x = x + 1;
        z = z - 1;
      }

      y = x + y;
    }

  }

  return 0;
}

