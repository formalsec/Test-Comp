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
  while (x >= 2)
  {
    x = x - 1;
    y = y + x;
    while (__logand(y >= x, __VERIFIER_nondet_int("while_1") != 0))
    {
      y = y - 1;
    }

    x = x - 1;
    y = y - x;
  }

  return 0;
}

