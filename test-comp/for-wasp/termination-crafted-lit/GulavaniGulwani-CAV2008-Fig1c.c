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
  x = __VERIFIER_nondet_int("x");
  i = __VERIFIER_nondet_int("i");
  n = __VERIFIER_nondet_int("n");
  while (x < n)
  {
    i = i + 1;
    x = x + 1;
  }

  return 0;
}

