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
  int k;
  int an;
  int bn;
  int tk;
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  k = __VERIFIER_nondet_int("k");
  an = __VERIFIER_nondet_int("an");
  bn = __VERIFIER_nondet_int("bn");
  tk = __VERIFIER_nondet_int("tk");
  while (__logand(__logor(__logor(__logand(an >= i, bn >= j), __logand(an >= i, bn <= j)), __logand(an <= i, bn >= j)), k >= (tk + 1)))
  {
    if (__logand(an >= i, bn >= j))
    {
      if (__VERIFIER_nondet_int("if_1") != 0)
      {
        j = j + k;
        tk = k;
        k = __VERIFIER_nondet_int("k");
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
          j = j + k;
          tk = k;
          k = __VERIFIER_nondet_int("k");
        }

      }

    }

  }

  return 0;
}

