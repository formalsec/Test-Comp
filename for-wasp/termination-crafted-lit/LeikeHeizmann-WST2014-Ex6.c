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
  a = __VERIFIER_nondet_int("a");
  b = __VERIFIER_nondet_int("b");
  while (__logand(a >= 1, b >= 1))
  {
    a = 2 * a;
    b = 3 * b;
  }

  return 0;
}

