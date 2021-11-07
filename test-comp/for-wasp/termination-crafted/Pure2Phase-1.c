typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int y;
  int z;
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  if (!__logand((-1073741823) <= y, y <= 1073741823))
    return 0;

  if (!(z <= 1073741823))
    return 0;

  while (z >= 0)
  {
    y = y - 1;
    if (y >= 0)
    {
      z = __VERIFIER_nondet_int("z");
      if (!(z <= 1073741823))
        return 0;

    }
    else
    {
      z = z - 1;
    }

  }

  return 0;
}

