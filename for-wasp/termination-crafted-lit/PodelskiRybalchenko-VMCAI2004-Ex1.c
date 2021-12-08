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
  int nondetNat;
  int nondetPos;
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  while ((i - j) >= 1)
  {
    nondetNat = __VERIFIER_nondet_int("nondetNat");
    if (nondetNat < 0)
    {
      nondetNat = -nondetNat;
    }

    i = i - nondetNat;
    nondetPos = __VERIFIER_nondet_int("nondetPos");
    if (nondetPos < 0)
    {
      nondetPos = -nondetPos;
    }

    nondetPos = nondetPos + 1;
    j = j + nondetPos;
  }

  return 0;
}

