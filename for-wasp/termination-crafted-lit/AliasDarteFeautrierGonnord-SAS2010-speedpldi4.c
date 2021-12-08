typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int m;
  int n;
  n = __VERIFIER_nondet_int("n");
  m = __VERIFIER_nondet_int("m");
  if (__logand(m > 0, n > m))
  {
    i = n;
    while (i > 0)
    {
      if (i < m)
      {
        i = i - 1;
      }
      else
      {
        i = i - m;
      }

    }

  }

  return 0;
}

