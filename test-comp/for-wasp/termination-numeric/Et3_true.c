extern int __VERIFIER_nondet_int(char *);
void loop(int a, int b);
int random(void);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  int z = __VERIFIER_nondet_int("z");
  loop(random(), random());
}

int random()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return -x;
  else
    return x;

}

void loop(int a, int b)
{
  if (a > 0)
  {
    a = a + b;
    b = b - 1;
    loop(a, b);
  }

}

