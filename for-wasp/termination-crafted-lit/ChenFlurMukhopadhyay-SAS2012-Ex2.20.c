typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int y;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  while (__logand(__logand(x > y, y >= 1), y <= 2))
  {
    x = x - y;
    y = __VERIFIER_nondet_int("y");
  }

  return 0;
}

