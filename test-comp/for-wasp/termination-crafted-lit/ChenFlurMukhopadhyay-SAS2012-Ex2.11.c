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
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  while (((4 * x) - (5 * y)) > 0)
  {
    oldx = x;
    x = (2 * oldx) + (4 * y);
    y = 4 * oldx;
  }

  return 0;
}

