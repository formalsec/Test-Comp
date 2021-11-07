typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  x = __VERIFIER_nondet_int("x");
  while (x != 0)
  {
    if (x > 0)
    {
      x = x - 1;
    }
    else
    {
      x = x + 1;
    }

  }

  return 0;
}

