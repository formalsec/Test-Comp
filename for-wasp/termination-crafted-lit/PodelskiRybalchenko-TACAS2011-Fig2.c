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
  while (x >= 0)
  {
    y = 1;
    while (y < x)
    {
      y = y + 1;
    }

    x = x - 1;
  }

  return 0;
}

