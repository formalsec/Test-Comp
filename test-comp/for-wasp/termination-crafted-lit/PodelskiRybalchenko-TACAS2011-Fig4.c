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
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  while (__logand(x > 0, y > 0))
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = x - 1;
      y = __VERIFIER_nondet_int("y");
    }
    else
    {
      y = y - 1;
    }

  }

  return 0;
}

