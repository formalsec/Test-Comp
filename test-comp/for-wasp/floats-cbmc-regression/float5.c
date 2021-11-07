extern void abort(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float5.c", 4, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
int main()
{
  float a = __VERIFIER_nondet_float("a");
  float b = __VERIFIER_nondet_float("b");
  if (!__logor(__logor(__logor(__logor(a == 1, a == 0.5), a == 2), a == 3), a == 0.1))
  {
    abort();
  }

  b = a;
  a /= 2;
  a *= 2;
  if (!(a == b))
  {
    reach_error();
    abort();
  }

}

