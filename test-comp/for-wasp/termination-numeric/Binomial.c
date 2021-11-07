extern int __VERIFIER_nondet_int(char *);
int fact(int n)
{
  if (n <= 0)
    return 1;
  else
    return n * fact(n - 1);

}

int binomialCoefficient(int n, int k)
{
  return fact(n) / (fact(k) * fact(n - k));
}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return 0;

  int y = __VERIFIER_nondet_int("y");
  if (y < 0)
    return 0;

  int z = __VERIFIER_nondet_int("z");
  for (int n = 0; n <= x; n++)
    for (int k = 0; k <= x; k++)
    if (k <= n)
    binomialCoefficient(n, k);
  else
    binomialCoefficient(k, n);



}

