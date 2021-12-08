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
  int z;
  int n;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  n = __VERIFIER_nondet_int("n");
  while (__logand((x + y) >= 0, x <= n))
  {
    x = (2 * x) + y;
    y = z;
    z = z;
    z = z + 1;
  }

  return 0;
}

