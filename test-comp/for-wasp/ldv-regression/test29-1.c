extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test29-1.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
union dummy
{
  int a;
  char b;
};
int main()
{
  union dummy d1;
  union dummy d2;
  int n = __VERIFIER_nondet_int("n");
  union dummy *pd = (n) ? (&d1) : (&d2);
  d1.a = __VERIFIER_nondet_int("a");
  if (pd == (&d1))
  {
    pd->a = 0;
  }
  else
  {
    pd->b = 0;
  }

  if (__logand(pd == (&d2), d1.a != 0))
  {
    goto ERROR;
  }

  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

