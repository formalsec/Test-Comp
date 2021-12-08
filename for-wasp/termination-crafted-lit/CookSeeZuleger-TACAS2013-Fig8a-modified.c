typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int K;
  int x;
  K = __VERIFIER_nondet_int("K");
  x = __VERIFIER_nondet_int("x");
  while (x != K)
  {
    if (x > K)
    {
      x = x - 1;
    }
    else
    {
      x = x + 1;
    }

  }

  return 0;
}

