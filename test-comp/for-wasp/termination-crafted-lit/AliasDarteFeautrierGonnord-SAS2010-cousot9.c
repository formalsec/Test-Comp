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
  int N;
  j = __VERIFIER_nondet_int("j");
  N = __VERIFIER_nondet_int("N");
  i = N;
  while (i > 0)
  {
    if (j > 0)
    {
      j = j - 1;
    }
    else
    {
      j = N;
      i = i - 1;
    }

  }

  return 0;
}

