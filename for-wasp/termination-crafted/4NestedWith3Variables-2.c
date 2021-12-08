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
  int q;
  int olda;
  q = __VERIFIER_nondet_int("q");
  a = __VERIFIER_nondet_int("a");
  b = __VERIFIER_nondet_int("b");
  while (q > 0)
  {
    q = (q + a) - 1;
    olda = a;
    a = (3 * olda) - (4 * b);
    b = (4 * olda) + (3 * b);
  }

  return 0;
}

