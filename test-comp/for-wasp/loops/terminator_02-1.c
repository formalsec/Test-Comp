extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "terminator_02-1.c", 3, "reach_error");
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
  int y = __VERIFIER_nondet_int("y");
  int z = __VERIFIER_nondet_int("z");
  while (__logand(x < 100, 100 < z))
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

  __VERIFIER_assert(0);
  return 0;
}

