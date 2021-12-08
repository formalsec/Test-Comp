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
  if ((2 * y) >= 1)
  {
    while (x >= 0)
    {
      x = (x - (2 * y)) + 1;
    }

  }

  return 0;
}

