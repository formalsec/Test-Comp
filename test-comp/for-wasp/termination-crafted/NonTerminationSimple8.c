typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  x = __VERIFIER_nondet_int("x");
  while (x >= 0)
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      x = x + 1;
    }
    else
    {
      if (__VERIFIER_nondet_int("if_2") != 0)
      {
        x = x + 2;
      }
      else
      {
        if (__VERIFIER_nondet_int("if_3") != 0)
        {
          x = x + 3;
        }
        else
        {
          if (__VERIFIER_nondet_int("if_4") != 0)
          {
            x = x + 4;
          }
          else
          {
            x = -1;
          }

        }

      }

    }

  }

  return 0;
}

