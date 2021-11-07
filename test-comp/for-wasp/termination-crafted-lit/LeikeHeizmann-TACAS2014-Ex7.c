typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int q;
  int z;
  q = __VERIFIER_nondet_int("q");
  z = __VERIFIER_nondet_int("z");
  while (q > 0)
  {
    q = (q + z) - 1;
    z = -z;
  }

  return 0;
}

