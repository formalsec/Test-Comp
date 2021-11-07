extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "cast_union_tight.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
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

union u
{
  int i[2];
  double d;
};
double cast(int i)
{
  union u x;
  union u y;
  x.i[0] = 0x43300000;
  y.i[0] = x.i[0];
  x.i[1] = 0x80000000;
  y.i[1] = i ^ x.i[1];
  return y.d - x.d;
}

int main()
{
  int a;
  double r;
  a = __VERIFIER_nondet_int("a");
  r = cast(a);
  __VERIFIER_assert(r == a);
  return 0;
}

