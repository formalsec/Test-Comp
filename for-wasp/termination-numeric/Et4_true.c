extern int __VERIFIER_nondet_int(char *);
void loop(int a, int b, int c);
int random(void);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  int z = __VERIFIER_nondet_int("z");
  loop(random(), random(), random());
}

int random()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return -x;
  else
    return x;

}

void loop(int a, int b, int c)
{
  if (__logand((b - c) >= 1, a == c))
  {
    int r = random();
    b = 10;
    c = (c + 1) + r;
    a = c;
    loop(a, b, c);
  }

}

