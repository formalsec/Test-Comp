extern int __VERIFIER_nondet_int(char *);
int average(int x, int y);
int random(void);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  int z = __VERIFIER_nondet_int("z");
  average(random(), random());
}

int random()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return -x;
  else
    return x;

}

int average(int x, int y)
{
  if (x > 0)
  {
    return average(x - 1, y + 1);
  }
  else
    if (y > 2)
  {
    return 1 + average(x + 1, y - 2);
  }
  else
  {
    return 1;
  }


}

