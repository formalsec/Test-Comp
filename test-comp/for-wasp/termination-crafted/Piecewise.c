typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int p;
  int q;
  q = __VERIFIER_nondet_int("q");
  p = __VERIFIER_nondet_int("p");
  while (__logand(__logand(q > 0, p > 0), p != q))
  {
    if (q < p)
    {
      q = q - 1;
      p = __VERIFIER_nondet_int("p");
    }
    else
    {
      if (p < q)
      {
        p = p - 1;
        q = __VERIFIER_nondet_int("q");
      }

    }

  }

  return 0;
}

