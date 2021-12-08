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
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  while (__logand(x >= 0, (x + y) >= 0))
  {
    x = (x + y) + z;
    y = (-z) - 1;
  }

  return 0;
}

