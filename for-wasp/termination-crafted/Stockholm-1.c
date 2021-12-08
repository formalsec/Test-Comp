typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  int a;
  int b;
  x = __VERIFIER_nondet_int("x");
  a = __VERIFIER_nondet_int("a");
  b = __VERIFIER_nondet_int("b");
  if (!__logand((-268435455) <= x, x <= 268435455))
    return 0;

  if (!__logand((-268435455) <= a, a <= 268435455))
    return 0;

  if (!__logand((-268435455) <= b, b <= 268435455))
    return 0;

  if (a == b)
  {
    while (x >= 0)
    {
      x = ((x + a) - b) - 1;
    }

  }

  return 0;
}

