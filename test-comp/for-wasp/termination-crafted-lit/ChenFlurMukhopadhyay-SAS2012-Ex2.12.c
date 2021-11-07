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
  while (x < 5)
  {
    oldx = x;
    x = oldx - y;
    y = oldx + y;
  }

  return 0;
}

