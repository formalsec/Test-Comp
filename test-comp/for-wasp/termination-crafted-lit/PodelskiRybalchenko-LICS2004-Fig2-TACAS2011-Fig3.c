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
  int oldx;
  int oldy;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  while (__logand(x > 0, y > 0))
  {
    oldx = x;
    oldy = y;
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = oldx - 1;
      y = oldx;
    }
    else
    {
      x = oldy - 2;
      y = oldx + 1;
    }

  }

  return 0;
}

