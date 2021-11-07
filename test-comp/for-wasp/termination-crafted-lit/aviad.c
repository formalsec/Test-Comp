extern int __VERIFIER_nondet_int(char *);
int f(int a)
{
  int tmp;
  int count = 0;
  while (a > 1)
  {
    tmp = a % 2;
    if (tmp == 0)
      a = a / 2;
    else
      a = a - 1;

    count++;
  }

  return count;
}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  int count = f(x);
  return count;
}

