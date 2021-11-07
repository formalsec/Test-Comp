extern int __VERIFIER_nondet_int(char *);
int x;
void foo(void)
{
  x--;
}

int main()
{
  x = __VERIFIER_nondet_int("x");
  while (x > 0)
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      foo();
    }
    else
    {
      foo();
    }

  }

  return 0;
}

