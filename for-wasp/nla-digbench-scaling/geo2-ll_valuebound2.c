extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "geo2-ll.c", 8, "reach_error");
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
  long long x;
  long long y;
  long long c;
  z = __VERIFIER_nondet_int("z");
  assume_abort_if_not(__logand(z >= 0, z <= 2));
  k = __VERIFIER_nondet_int("k");
  assume_abort_if_not(__logand(k >= 0, k <= 2));
  x = 1;
  y = 1;
  c = 1;
  while (1)
  {
    __VERIFIER_assert((((1 + (x * z)) - x) - (z * y)) == 0);
    if (!(c < k))
      break;

    c = c + 1;
    x = (x * z) + 1;
    y = y * z;
  }

  __VERIFIER_assert((((1 + (x * z)) - x) - (z * y)) == 0);
  return 0;
}

