typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int x;
  x = __VERIFIER_nondet_int("x");
  if (x > 0)
  {
    while (__logand(x != 0, x != (-1)))
    {
      x = x - 2;
    }

  }

  return 0;
}

