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
  if (!__logand((-1073741823) <= x, x <= 1073741823))
    return 0;

  if (!__logand((-1073741823) <= y, y <= 1073741823))
    return 0;

  while (__logor(x >= 0, y >= 0))
  {
    oldx = x;
    x = y - 1;
    y = oldx - 1;
  }

  return 0;
}

