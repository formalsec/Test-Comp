extern int __VERIFIER_nondet_int(char *);
int Ack(int m, int n)
{
  if (m == 0)
    return n + 1;
  else
    if (n == 0)
    return Ack(m - 1, 1);
  else
    return Ack(m - 1, Ack(m, n - 1));


}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  if (!(x <= 28))
    return 0;

  if (!(y <= 3))
    return 0;

  if (__logor(x < 0, y < 0))
  {
    return 0;
  }

  int r = Ack(x, y);
  return r;
}

