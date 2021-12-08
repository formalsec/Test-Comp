typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int i;
  i = __VERIFIER_nondet_int("i");
  while (i < 255)
  {
    if (__VERIFIER_nondet_int("if_1") != 0)
    {
      i = i + 1;
    }
    else
    {
      i = i + 2;
    }

  }

  return 0;
}

