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
  int ell;
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  k = __VERIFIER_nondet_int("k");
  while (__logand(i <= 100, j <= k))
  {
    ell = i;
    i = j;
    j = ell + 1;
    k = k - 1;
  }

  return 0;
}

