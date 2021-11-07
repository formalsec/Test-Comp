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
  x = __VERIFIER_nondet_int("x");
  d1 = __VERIFIER_nondet_int("d1");
  d2 = __VERIFIER_nondet_int("d2");
  if (!__logand((-1048575) <= x, x <= 1048575))
    return 0;

  if (!__logand((-1048575) <= d1, d1 <= 1048575))
    return 0;

  if (!__logand((-1048575) <= d2, d2 <= 1048575))
    return 0;

  while (x >= 0)
  {
    x = x - d1;
    d1old = d1;
    d1 = d2 + 1;
    d2 = d1old + 1;
  }

  return 0;
}

