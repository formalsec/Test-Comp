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
  int oldy;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  oldy = __VERIFIER_nondet_int("oldy");
  while (__logand(x > 0, y <= (-oldy)))
  {
    x = y;
    oldy = y;
    y = __VERIFIER_nondet_int("y");
  }

  return 0;
}

