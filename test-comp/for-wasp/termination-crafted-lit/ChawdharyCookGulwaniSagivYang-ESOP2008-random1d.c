typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a;
  int x;
  int max;
  a = __VERIFIER_nondet_int("a");
  x = __VERIFIER_nondet_int("x");
  max = __VERIFIER_nondet_int("max");
  if (max > 0)
  {
    a = 0;
    x = 1;
    while (x <= max)
    {
      if (__VERIFIER_nondet_int("if_1") != 0)
      {
        a = a + 1;
      }
      else
      {
        a = a - 1;
      }

      x = x + 1;
    }

  }

  return 0;
}

