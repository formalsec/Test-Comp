typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a;
  int b;
  a = __VERIFIER_nondet_int("a");
  b = __VERIFIER_nondet_int("b");
  while (a >= 0)
  {
    a = a + b;
    if (b >= 0)
    {
      b = (-b) - 1;
    }
    else
    {
      b = -b;
    }

  }

  return 0;
}

