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
  int n;
  n = __VERIFIER_nondet_int("n");
  y = __VERIFIER_nondet_int("y");
  x = n;
  if (__logand(x >= 0, x <= 1073741823))
  {
    while (x >= 0)
    {
      y = 1;
      if (y < x)
      {
        while (y < x)
        {
          y = 2 * y;
        }

      }

      x = x - 1;
    }

  }

  return 0;
}

