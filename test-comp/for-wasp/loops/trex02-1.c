extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "trex02-1.c", 3, "reach_error");
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

_Bool __VERIFIER_nondet_bool(char *);
int __VERIFIER_nondet_int(char *);
int x;
void foo()
{
  x--;
}

int main()
{
  x = __VERIFIER_nondet_int("x");
  while (x > 0)
  {
    _Bool c = __VERIFIER_nondet_bool("c");
    if (c)
      foo();
    else
      foo();

  }

  __VERIFIER_assert(x <= 0);
}

