typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int c;
  int x;
  x = __VERIFIER_nondet_int("x");
  c = __VERIFIER_nondet_int("c");
  if (c == 0)
  {
    while (x >= 0)
    {
      x = x + c;
    }

  }

  return 0;
}

