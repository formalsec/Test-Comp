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
  c = 5;
  x = __VERIFIER_nondet_int("x");
  while (x >= 0)
  {
    x = x + c;
  }

  return 0;
}

