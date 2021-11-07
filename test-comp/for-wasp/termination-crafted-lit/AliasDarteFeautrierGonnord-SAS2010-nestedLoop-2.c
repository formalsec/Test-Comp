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
  int k;
  int m;
  int n;
  int N;
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  k = __VERIFIER_nondet_int("k");
  n = __VERIFIER_nondet_int("n");
  m = __VERIFIER_nondet_int("m");
  N = __VERIFIER_nondet_int("N");
  if (__logand(__logand(0 <= n, 0 <= m), 0 <= N))
  {
    i = 0;
    while (i < n)
    {
      j = 0;
      while (j < m)
      {
        j = j + 1;
        k = i;
        while (k < N)
        {
          k = k + 1;
        }

        i = k;
      }

      i = i + 1;
    }

  }

  return 0;
}

