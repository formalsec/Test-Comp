typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  x = __VERIFIER_nondet_int("x");
  while (x <= 100)
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = ((-2) * x) + 2;
    }
    else
    {
      x = ((-3) * x) - 2;
    }

  }

  return 0;
}

