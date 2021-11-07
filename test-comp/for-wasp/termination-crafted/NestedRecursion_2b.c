extern int __VERIFIER_nondet_int(char *);
int g(int x)
{
  if (x == 0)
    return 1;
  else
    return g(g(x - 1) + 1);

}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return 0;

  g(x);
}

