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
  int N;
  x = __VERIFIER_nondet_int("x");
  y = __VERIFIER_nondet_int("y");
  N = __VERIFIER_nondet_int("N");
  if (__logand(__logand(__logand(N < 536870912, x < 536870912), y < 536870912), x >= (-1073741824)))
  {
    if ((x + y) >= 0)
    {
      while (x <= N)
      {
        if (__VERIFIER_nondet_int("if_1") != 0)
        {
          x = (2 * x) + y;
          y = y + 1;
        }
        else
        {
          x = x + 1;
        }

      }

    }

  }

  return 0;
}

