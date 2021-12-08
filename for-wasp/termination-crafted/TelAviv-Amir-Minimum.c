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
  while (__logand(x > 0, y > 0))
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      if (x < y)
      {
        y = x - 1;
      }
      else
      {
        y = y - 1;
      }

      x = __VERIFIER_nondet_int("x");
    }
    else
    {
      if (x < y)
      {
        x = x - 1;
      }
      else
      {
        x = y - 1;
      }

      y = __VERIFIER_nondet_int("y");
    }

  }

  return 0;
}

