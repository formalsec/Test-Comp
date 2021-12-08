typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int b;
  x = __VERIFIER_nondet_int("x");
  b = __VERIFIER_nondet_int("b");
  while (b != 0)
  {
    b = __VERIFIER_nondet_int("b");
    x = x - 1;
    if (x >= 0)
    {
      b = 1;
    }
    else
    {
      b = 0;
    }

  }

  return 0;
}

