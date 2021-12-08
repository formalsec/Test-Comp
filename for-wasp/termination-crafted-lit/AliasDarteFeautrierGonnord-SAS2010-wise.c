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
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  if (__logand(x >= 0, y >= 0))
  {
    while (__logor((x - y) > 2, (y - x) > 2))
    {
      if (x < y)
      {
        x = x + 1;
      }
      else
      {
        y = y + 1;
      }

    }

  }

  return 0;
}

