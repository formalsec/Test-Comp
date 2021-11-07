extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "trex04.c", 3, "reach_error");
}

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

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

extern _Bool __VERIFIER_nondet_bool(char *);
extern int __VERIFIER_nondet_int(char *);
void foo()
{
  int y = 0;
  _Bool c1 = __VERIFIER_nondet_bool("c1");
  _Bool c2 = __VERIFIER_nondet_bool("c2");
  if (c1)
    y++;

  if (c2)
    y--;
  else
    y += 10;

}

int main()
{
  int d = 1;
  int x = __VERIFIER_nondet_int("x");
  if (!__logand(x <= 1000000, x >= (-1000000)))
    return 0;

  _Bool c1 = __VERIFIER_nondet_bool("c1");
  _Bool c2 = __VERIFIER_nondet_bool("c2");
  if (c1)
    d = d - 1;

  if (c2)
    foo();

  c1 = __VERIFIER_nondet_bool("c1"), c2 = __VERIFIER_nondet_bool("c2");
  if (c1)
    foo();

  if (c2)
    d = d - 1;

  while (x > 0)
  {
    x = x - d;
  }

  __VERIFIER_assert(x <= 0);
}

