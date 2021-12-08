typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int r;
  int da;
  int db;
  int temp;
  r = __VERIFIER_nondet_int("r");
  if (r >= 0)
  {
    da = 2 * r;
    db = 2 * r;
    while (da >= r)
    {
      if (__VERIFIER_nondet_int("if_1") != 0)
      {
        da = da - 1;
      }
      else
      {
        temp = da;
        da = db - 1;
        db = da;
      }

    }

  }

  return 0;
}

