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
  int tx;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  tx = __VERIFIER_nondet_int("tx");
  if (!__logand((-1073741823) <= tx, tx <= 1073741823))
    return 0;

  if (!__logand((-1073741823) <= z, z <= 1073741823))
    return 0;

  if (!__logand((-1073741823) <= x, x <= 1073741823))
    return 0;

  if (!(y <= 1073741823))
    return 0;

  while (__logand(x >= y, x <= (tx + z)))
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      z = z - 1;
      tx = x;
      x = __VERIFIER_nondet_int("x");
      if (!__logand((-1073741823) <= x, x <= 1073741823))
        return 0;

    }
    else
    {
      y = y + 1;
    }

  }

  return 0;
}

