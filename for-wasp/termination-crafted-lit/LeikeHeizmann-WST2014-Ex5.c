typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a;
  int b;
  int olda;
  a = __VERIFIER_nondet_int("a");
  b = __VERIFIER_nondet_int("b");
  while (a >= 7)
  {
    olda = a;
    a = b;
    b = olda + 1;
  }

  return 0;
}

