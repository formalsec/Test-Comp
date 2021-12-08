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
  while (x >= 0)
  {
    x = x + __VERIFIER_nondet_int("x");
  }

  return 0;
}

