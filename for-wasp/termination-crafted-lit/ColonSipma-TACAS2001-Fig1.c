typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int k;
  int i;
  int j;
  int tmp;
  k = __VERIFIER_nondet_int("k");
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  while (__logand(i <= 100, j <= k))
  {
    tmp = i;
    i = j;
    j = tmp + 1;
    k = k - 1;
  }

  return 0;
}

