typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int y;
  int n;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  n = __VERIFIER_nondet_int("n");
  while (__logand(x > 0, x < n))
  {
    x = ((-x) + y) - 5;
    y = 2 * y;
  }

  return 0;
}

