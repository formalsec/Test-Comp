extern int __VERIFIER_nondet_int(char *);
int main()
{
  int y = __VERIFIER_nondet_int("y");
  while (__logand(y >= 0, y <= 10))
  {
    y = ((2 * y) + 1) / 2;
  }

  return 0;
}

