extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "trex03-2.c", 3, "reach_error");
}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
}

unsigned int __VERIFIER_nondet_uint(char *);
_Bool __VERIFIER_nondet_bool(char *);
int main()
{
  unsigned int x1 = __VERIFIER_nondet_uint("x1");
  unsigned int x2 = __VERIFIER_nondet_uint("x2");
  unsigned int x3 = __VERIFIER_nondet_uint("x3");
  unsigned int d1 = 1;
  unsigned int d2 = 1;
  unsigned int d3 = 1;
  _Bool c1 = __VERIFIER_nondet_bool("c1");
  _Bool c2 = __VERIFIER_nondet_bool("c2");
  while (__logand(__logand(x1 > 0, x2 > 0), x3 > 0))
  {
    if (c1)
      x1 = x1 - d1;
    else
      if (c2)
      x2 = x2 - d2;
    else
      x3 = x3 - d3;


    c1 = __VERIFIER_nondet_bool("c1");
    c2 = __VERIFIER_nondet_bool("c2");
  }

  __VERIFIER_assert(__logor(__logor(x1 == 0, x2 == 0), x3 == 0));
  return 0;
}

