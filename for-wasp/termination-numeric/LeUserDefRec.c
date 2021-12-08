extern int __VERIFIER_nondet_int(char *);
int le(int x, int y);
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
  le(x, y);
}

int random()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return -x;
  else
    return x;

}

int le(int x, int y)
{
  if (__logand(x > 0, y > 0))
  {
    return le(x - 1, y - 1);
  }
  else
  {
    return x == 0;
  }

}

