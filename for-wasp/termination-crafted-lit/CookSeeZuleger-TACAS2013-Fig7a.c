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
  int d;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  d = __VERIFIER_nondet_int("d");
  while (__logand(__logand(x > 0, y > 0), d > 0))
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = x - 1;
      d = __VERIFIER_nondet_int("d");
    }
    else
    {
      x = __VERIFIER_nondet_int("x");
      y = y - 1;
      d = d - 1;
    }

  }

  return 0;
}

