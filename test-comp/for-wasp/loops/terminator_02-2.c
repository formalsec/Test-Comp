extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "terminator_02-2.c", 3, "reach_error");
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

int __VERIFIER_nondet_int(char *);
_Bool __VERIFIER_nondet_bool(char *);
int main()
{
  int x = __VERIFIER_nondet_int("x");
  int z = __VERIFIER_nondet_int("z");
  if (!(x > (-100)))
    return 0;

  if (!(x < 200))
    return 0;

  if (!(z > 100))
    return 0;

  if (!(z < 200))
    return 0;

  while (__logand(x < 100, z > 100))
  {
    _Bool tmp = __VERIFIER_nondet_bool("tmp");
    if (tmp)
    {
      x++;
    }
    else
    {
      x--;
      z--;
    }

  }

  __VERIFIER_assert(__logor(x >= 100, z <= 100));
  return 0;
}

