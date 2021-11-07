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
  while (a < 30)
  {
    while (b < a)
    {
      if (b > 5)
      {
        b = b + 7;
      }
      else
      {
        b = b + 2;
      }

      if (__logand(b >= 10, b <= 12))
      {
        a = a + 10;
      }
      else
      {
        a = a + 1;
      }

    }

    a = a + 2;
    b = b - 10;
  }

  return 0;
}

