typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int q;
  int y;
  q = __VERIFIER_nondet_int("q");
  y = __VERIFIER_nondet_int("y");
  while (q > 0)
  {
    if (y > 0)
    {
      q = (q - y) - 1;
    }
    else
    {
      q = (q + y) - 1;
    }

  }

  return 0;
}

