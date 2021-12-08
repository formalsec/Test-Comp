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
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  while (i < 5)
  {
    j = 0;
    while (__logand(i > 2, j <= 9))
    {
      j = j + 1;
    }

    i = i + 1;
  }

  return 0;
}

