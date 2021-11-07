typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int i;
  int n;
  int m;
  x = __VERIFIER_nondet_int("x");
  i = __VERIFIER_nondet_int("i");
  n = __VERIFIER_nondet_int("n");
  m = __VERIFIER_nondet_int("m");
  while (x < n)
  {
    i = i + 1;
    x = x + 1;
  }

  while (x < m)
  {
    i = i + 1;
    x = x + 1;
  }

  return 0;
}

