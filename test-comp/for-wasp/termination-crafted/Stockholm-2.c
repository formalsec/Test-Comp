typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int a;
  int b;
  x = __VERIFIER_nondet_int("x");
  a = __VERIFIER_nondet_int("a");
  b = __VERIFIER_nondet_int("b");
  if (a == b)
  {
    while (x >= 0)
    {
      x = ((x + a) - b) - 1;
    }

  }

  return 0;
}

