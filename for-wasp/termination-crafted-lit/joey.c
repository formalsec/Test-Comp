extern int __VERIFIER_nondet_int(char *);
int rec(int x)
{
  if (x <= 0)
  {
    return x;
  }
  else
    if ((x % 2) == 0)
  {
    return rec(x / 2);
  }
  else
  {
    return rec(++x) + rec(--x);
  }


}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y;
  y = rec(x);
}

