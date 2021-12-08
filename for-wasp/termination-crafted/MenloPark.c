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
  y = 100;
  z = 1;
  while (x >= 0)
  {
    x = x - y;
    y = y - z;
    z = -z;
  }

  return 0;
}

