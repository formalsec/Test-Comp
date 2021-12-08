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
  int n;
  n = __VERIFIER_nondet_int("n");
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  while (x >= 0)
  {
    while (__logand(y >= 0, __VERIFIER_nondet_int("while_1") != 0))
    {
      y = y - 1;
    }

    x = x - 1;
    while (__logand(y <= n, __VERIFIER_nondet_int("while_2") != 0))
    {
      y = y + 1;
    }

  }

  return 0;
}

