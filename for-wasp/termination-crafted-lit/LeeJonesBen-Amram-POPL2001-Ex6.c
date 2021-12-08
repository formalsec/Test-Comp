extern int __VERIFIER_nondet_int(char *);
int f(int a, int b);
int g(int c, int d);
int f(int a, int b)
{
  if (b == 0)
  {
    return g(a, 0);
  }
  else
  {
    return f(1 + a, b - 1);
  }

}

int g(int c, int d)
{
  if (c == 0)
  {
    return d;
  }
  else
  {
    return g(c - 1, 1 + d);
  }

}

int main()
{
  int a = __VERIFIER_nondet_int("a");
  int b = __VERIFIER_nondet_int("b");
  if (__logand(a >= 0, b >= 0))
  {
    f(a, b);
  }

  return 0;
}

