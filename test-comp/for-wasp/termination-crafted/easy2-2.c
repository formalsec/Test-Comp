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
  y = 0;
  z = __VERIFIER_nondet_int("z");
  while (z > 0)
  {
    x = x + 1;
    y = y - 1;
    z = z - 1;
  }

  return 0;
}

