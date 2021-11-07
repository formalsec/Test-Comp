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
  while (__logand(x >= 0, y >= 0))
  {
    y = y - 1;
    if (y < 0)
    {
      x = x - 1;
      y = __VERIFIER_nondet_int("y");
    }

  }

  return 0;
}

