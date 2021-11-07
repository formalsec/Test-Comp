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
  while (__logand(x >= 0, x <= 1073741823))
  {
    y = 1;
    while (y < x)
    {
      y = 2 * y;
    }

    x = x - 1;
  }

  return 0;
}

