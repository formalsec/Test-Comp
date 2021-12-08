typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int r;
  int x;
  int y;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  if (x < 0)
  {
    x = -x;
  }

  if (y < 0)
  {
    y = -y;
  }

  while (y > 0)
  {
    r = x;
    while (r >= y)
    {
      r = r - y;
    }

    x = y;
    y = r;
  }

  return 0;
}

