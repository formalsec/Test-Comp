extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "geo1.c", 9, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
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
    }

  }

  return;
}

int main()
{
  int z;
  int k;
  int x;
  int y;
  int c;
  z = __VERIFIER_nondet_int("z");
  k = __VERIFIER_nondet_int("k");
  x = 1;
  y = z;
  c = 1;
  while (1)
  {
    __VERIFIER_assert(((((x * z) - x) - y) + 1) == 0);
    if (!(c < k))
      break;

    c = c + 1;
    x = (x * z) + 1;
    y = y * z;
  }

  x = x * (z - 1);
  __VERIFIER_assert(((1 + x) - y) == 0);
  return 0;
}

