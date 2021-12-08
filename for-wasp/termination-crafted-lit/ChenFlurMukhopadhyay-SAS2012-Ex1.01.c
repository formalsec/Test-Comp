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
  while (x > 0)
  {
    x = ((-2) * x) + 10;
  }

  return 0;
}

