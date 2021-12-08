extern int __VERIFIER_nondet_int(char *);
int _log(int x, int y);
int random(void);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return 0;

  int y = __VERIFIER_nondet_int("y");
  if (y < 0)
    return 0;

  int z = __VERIFIER_nondet_int("z");
  _log(x, y);
}

int random()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return -x;
  else
    return x;

}

int _log(int x, int y)
{
  if (__logand(x >= y, y > 1))
  {
    return 1 + _log(x / y, y);
  }

  return 0;
}

