typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int d1;
  int d2;
  int d1old;
  d1 = 73;
  d2 = 74;
  x = __VERIFIER_nondet_int("x");
  while (x >= 0)
  {
    x = x - d1;
    d1old = d1;
    d1 = d2 + 1;
    d2 = d1old + 1;
  }

  return 0;
}

