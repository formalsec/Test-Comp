typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int k;
  int i;
  int j;
  int n;
  k = __VERIFIER_nondet_int("k");
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  n = __VERIFIER_nondet_int("n");
  if (k >= 1)
  {
    i = 0;
    while (i < n)
    {
      j = 0;
      while (j <= i)
      {
        j = j + k;
      }

      i = i + 1;
    }

  }

  return 0;
}

