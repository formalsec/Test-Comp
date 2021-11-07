typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int oldx;
  int x;
  int y;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  if (!(x >= (-2147483647)))
    return 0;

  if (!(y >= (-2147483647)))
    return 0;

  while (true)
  {
    oldx = x;
    x = -y;
    y = oldx;
  }

  return 0;
}

