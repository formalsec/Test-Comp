typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x1;
  int x2;
  x1 = __VERIFIER_nondet_int("x1");
  x2 = __VERIFIER_nondet_int("x2");
  while (x1 <= 10)
  {
    x2 = 1000;
    while (x2 > 1)
    {
      x2 = x2 - 1;
    }

    x1 = x1 + 1;
  }

  return 0;
}

