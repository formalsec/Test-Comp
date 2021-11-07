extern int __VERIFIER_nondet_int(char *);
void rec(int x, int y)
{
  if (__logand(x <= 23, x >= (-42)))
  {
    rec((2 * y) - 2, x + 1);
  }

}

int main()
{
  int n = __VERIFIER_nondet_int("n");
  rec(n, n + 1);
  return 0;
}

