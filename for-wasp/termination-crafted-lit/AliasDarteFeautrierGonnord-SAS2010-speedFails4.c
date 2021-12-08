typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int x;
  int n;
  int b;
  int t;
  i = __VERIFIER_nondet_int("i");
  x = __VERIFIER_nondet_int("x");
  n = __VERIFIER_nondet_int("n");
  b = __VERIFIER_nondet_int("b");
  if (b >= 1)
  {
    t = 1;
  }
  else
  {
    t = -1;
  }

  while (x <= n)
  {
    if (b >= 1)
    {
      x = x + t;
    }
    else
    {
      x = x - t;
    }

  }

  return 0;
}

