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
  y = __VERIFIER_nondet_int("y");
  z = __VERIFIER_nondet_int("z");
  if (!((-268435455) <= y))
    return 0;

  if (!((-268435455) <= z))
    return 0;

  if (__VERIFIER_nondet_int("if_1") != 0)
  {
    x = 1;
  }
  else
  {
    x = -1;
  }

  if (x > 0)
  {
    x = x + 1;
  }
  else
  {
    x = x - 1;
  }

  if (x > 0)
  {
    x = x + 1;
  }
  else
  {
    x = x - 1;
  }

  if (x > 0)
  {
    x = x + 1;
  }
  else
  {
    x = x - 1;
  }

  if (x > 0)
  {
    x = x + 1;
  }
  else
  {
    x = x - 1;
  }

  if (x > 0)
  {
    x = x + 1;
  }
  else
  {
    x = x - 1;
  }

  if (x > 0)
  {
    x = x + 1;
  }
  else
  {
    x = x - 1;
  }

  if (x > 0)
  {
    x = x + 1;
  }
  else
  {
    x = x - 1;
  }

  if (x > 0)
  {
    x = x + 1;
  }
  else
  {
    x = x - 1;
  }

  while (__logand(y < 100, z < 100))
  {
    y = y + x;
    z = z - x;
  }

  return 0;
}

