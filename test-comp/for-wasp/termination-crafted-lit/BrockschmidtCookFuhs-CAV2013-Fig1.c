typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int j;
  int n;
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  n = __VERIFIER_nondet_int("n");
  while (i < n)
  {
    j = 0;
    while (j <= i)
    {
      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

