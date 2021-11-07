typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int oldx;
  x = __VERIFIER_nondet_int("x");
  oldx = __VERIFIER_nondet_int("oldx");
  while (__logand(__logand(x > 0, x < 100), x >= ((2 * oldx) + 10)))
  {
    oldx = x;
    x = __VERIFIER_nondet_int("x");
  }

  return 0;
}

