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
  int oldx;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  oldx = __VERIFIER_nondet_int("oldx");
  while (__logand(__logand(x > 0, x < y), x > (2 * oldx)))
  {
    oldx = x;
    x = __VERIFIER_nondet_int("x");
    y = z;
  }

  return 0;
}

