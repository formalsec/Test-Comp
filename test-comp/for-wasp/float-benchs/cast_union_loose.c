extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "cast_union_loose.c", 3, "reach_error");
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
  assume_abort_if_not(__logand(a >= (-10000), a <= 10000));
  r = cast(a);
  __VERIFIER_assert(__logand(r >= (-10000.), r <= 10000.));
  return 0;
}

