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
  int i;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  z = 0;
  i = x;
  if (__logand(y > 0, x > 0))
  {
    while (i > 0)
    {
      i = i - 1;
      z = z + 1;
    }

    while (i < y)
    {
      i = i + 1;
      z = z - 1;
    }

  }

  return 0;
}

