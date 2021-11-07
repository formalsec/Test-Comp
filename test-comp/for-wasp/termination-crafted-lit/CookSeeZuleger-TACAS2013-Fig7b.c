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
  while (__logand(__logand(x > 0, y > 0), z > 0))
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = x - 1;
    }
    else
    {
      if (__VERIFIER_nondet_int("if_2") != 0)
      {
        y = y - 1;
        z = __VERIFIER_nondet_int("z");
      }
      else
      {
        z = z - 1;
        x = __VERIFIER_nondet_int("x");
      }

    }

  }

  return 0;
}

