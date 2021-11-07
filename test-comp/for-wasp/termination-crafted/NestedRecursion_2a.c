extern int __VERIFIER_nondet_int(char *);
int g(int x)
{
  if (x == 0)
    return 0;
  else
    return g(g(x - 1));

}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  g(x);
}

