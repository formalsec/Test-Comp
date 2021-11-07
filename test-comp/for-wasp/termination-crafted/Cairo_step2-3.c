typedef enum 
{
  false,
  true
} bool;
extern unsigned int __VERIFIER_nondet_uint(char *);
int main()
{
  unsigned int x;
  x = __VERIFIER_nondet_uint("x");
  if (x > 0)
  {
    while (x != 0)
    {
      x = x - 2;
    }

  }

  return 0;
}

