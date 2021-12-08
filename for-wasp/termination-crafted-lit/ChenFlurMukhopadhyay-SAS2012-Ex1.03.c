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
  while (__logand(x > 1, ((-2) * x) == oldx))
  {
    oldx = x;
    x = __VERIFIER_nondet_int("x");
  }

  return 0;
}

