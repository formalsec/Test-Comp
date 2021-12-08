extern int __VERIFIER_nondet_int(char *);
int r1(int ls, int a)
{
  if (ls == 0)
  {
    return a;
  }
  else
  {
    return r1(ls - 1, (ls + 1) + a);
  }

}

int rev(int ls)
{
  return r1(ls, 0);
}

int main()
{
  int ls = __VERIFIER_nondet_int("ls");
  if (ls >= 0)
  {
    rev(ls);
  }

  return 0;
}

