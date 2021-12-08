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
  x = 0;
  y = 100;
  z = __VERIFIER_nondet_int("z");
  while (x < 40)
  {
    if (z == 0)
    {
      x = x + 1;
    }
    else
    {
      x = x + 2;
    }

  }

  return 0;
}

