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
  N = __VERIFIER_nondet_int("N");
  i = N;
  while (i > 0)
  {
    j = N;
    while (j > 0)
    {
      j = j - 1;
    }

    i = i - 1;
  }

  return 0;
}

