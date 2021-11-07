typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int M;
  x = __VERIFIER_nondet_int("x");
  M = __VERIFIER_nondet_int("M");
  if (M > 0)
  {
    while (x != M)
    {
      if (x > M)
      {
        x = 0;
      }
      else
      {
        x = x + 1;
      }

    }

  }

  return 0;
}

