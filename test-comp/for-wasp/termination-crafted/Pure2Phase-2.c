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
  while (z >= 0)
  {
    y = y - 1;
    if (y >= 0)
    {
      z = __VERIFIER_nondet_int("z");
    }
    else
    {
      z = z - 1;
    }

  }

  return 0;
}

