typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  int n;
  n = __VERIFIER_nondet_int("n");
  i = n - 1;
  while (i > 1)
  {
    i = i - 1;
  }

  return 0;
}

