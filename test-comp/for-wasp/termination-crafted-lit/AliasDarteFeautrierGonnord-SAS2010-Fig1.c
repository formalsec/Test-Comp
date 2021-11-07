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
  int m;
  y = 0;
  m = __VERIFIER_nondet_int("m");
  x = m;
  while (__logand(x >= 0, y >= 0))
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      while (__logand(y <= m, __VERIFIER_nondet_int("while_2") != 0))
      {
        y = y + 1;
      }

      x = x - 1;
    }

    y = y - 1;
  }

  return 0;
}

