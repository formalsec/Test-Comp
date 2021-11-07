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
  int x;
  int y;
  a = __VERIFIER_nondet_int("a");
  b = __VERIFIER_nondet_int("b");
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  if (!__logand((-268435455) <= a, a <= 268435455))
    return 0;

  if (!__logand((-268435455) <= b, b <= 268435455))
    return 0;

  if (!__logand((-268435455) <= x, x <= 268435455))
    return 0;

  if (!__logand((-268435455) <= y, y <= 268435455))
    return 0;

  if (a == b)
  {
    while (__logor(x >= 0, y >= 0))
    {
      x = ((x + a) - b) - 1;
      y = ((y + b) - a) - 1;
    }

  }

  return 0;
}

