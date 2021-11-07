typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int c;
  int u;
  int v;
  int w;
  int x;
  int y;
  int z;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  u = x;
  v = y;
  w = z;
  c = 0;
  while (x >= y)
  {
    c = c + 1;
    if (z > 1)
    {
      z = z - 1;
      x = x + z;
    }
    else
    {
      y = y + 1;
    }

  }

  return 0;
}

