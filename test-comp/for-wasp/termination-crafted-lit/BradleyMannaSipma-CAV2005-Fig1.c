typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int y1;
  int y2;
  y1 = __VERIFIER_nondet_int("y1");
  y2 = __VERIFIER_nondet_int("y2");
  if (__logand(y1 > 0, y2 > 0))
  {
    while (y1 != y2)
    {
      if (y1 > y2)
      {
        y1 = y1 - y2;
      }
      else
      {
        y2 = y2 - y1;
      }

    }

  }

  return 0;
}

