extern int __VERIFIER_nondet_int(char *);
int mc91(int n)
{
  if (n > 100)
    return n - 10;
  else
    return mc91(mc91(n + 11));

}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  mc91(x);
}

