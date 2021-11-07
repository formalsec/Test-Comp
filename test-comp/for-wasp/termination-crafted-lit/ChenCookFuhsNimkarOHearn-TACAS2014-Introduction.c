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
  k = __VERIFIER_nondet_int("k");
  i = __VERIFIER_nondet_int("i");
  if (k >= 0)
  {
  }
  else
  {
    i = -1;
  }

  while (i >= 0)
  {
    i = __VERIFIER_nondet_int("i");
  }

  i = 2;
  return 0;
}

