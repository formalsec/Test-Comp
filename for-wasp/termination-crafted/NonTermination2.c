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
  while (__logand(x > 1, x >= (2 * oldx)))
  {
    oldx = x;
    x = __VERIFIER_nondet_int("x");
  }

  return 0;
}

