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
  x = __VERIFIER_nondet_int("x");
  c = __VERIFIER_nondet_int("c");
  if (!__logand((-65535) <= x, x <= 65535))
    return 0;

  if (!__logand((-65535) <= c, c <= 65535))
    return 0;

  if (c >= 2)
  {
    while ((x + c) >= 0)
    {
      x = x - c;
      c = c + 1;
    }

  }

  return 0;
}

