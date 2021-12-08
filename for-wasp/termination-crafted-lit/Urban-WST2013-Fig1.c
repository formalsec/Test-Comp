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
  while (x <= 10)
  {
    if (x > 6)
    {
      x = x + 2;
    }

  }

  return 0;
}

