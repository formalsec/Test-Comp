typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int j;
  int an;
  int bn;
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  an = __VERIFIER_nondet_int("an");
  bn = __VERIFIER_nondet_int("bn");
  while (__logor(__logor(__logand(an >= i, bn >= j), __logand(an >= i, bn <= j)), __logand(an <= i, bn >= j)))
  {
    if (__logand(an >= i, bn >= j))
    {
      if (__VERIFIER_nondet_int("if_1") != 0)
      {
        j = j + 1;
      }
      else
      {
        i = i + 1;
      }

    }
    else
    {
      if (__logand(an >= i, bn <= j))
      {
        i = i + 1;
      }
      else
      {
        if (__logand(an <= i, bn >= j))
        {
          j = j + 1;
        }

      }

    }

  }

  return 0;
}

