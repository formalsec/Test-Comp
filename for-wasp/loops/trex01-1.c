extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "trex01-1.c", 3, "reach_error");
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
void f(int d)
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  int k = __VERIFIER_nondet_int("k");
  int z = 1;
  if (!(k <= 1073741823))
    return;

  L1:
  while (z < k)
  {
    z = 2 * z;
  }


  __VERIFIER_assert(z >= 2);
  L2:
  while (__logand(x > 0, y > 0))
  {
    _Bool c = __VERIFIER_nondet_bool("c");
    if (c)
    {
      P1:
      x = x - d;

      y = __VERIFIER_nondet_bool("y");
      z = z - 1;
    }
    else
    {
      y = y - d;
    }

  }


}

int main()
{
  _Bool c = __VERIFIER_nondet_bool("c");
  if (c)
  {
    f(1);
  }
  else
  {
    f(2);
  }

  return 0;
}

