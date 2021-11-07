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
  if (!(x <= 65535))
    return 0;

  if (!__logand((-65535) <= y, y <= 65535))
    return 0;

  if (!__logand((-65535) <= z, z <= 65535))
    return 0;

  while (x >= 0)
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = x + y;
    }
    else
    {
      x = x + z;
    }

    y = y + z;
    z = z - 1;
  }

  return 0;
}

