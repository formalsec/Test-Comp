extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "sizeofparameters_test.i", 3, "reach_error");
}

extern long __VERIFIER_nondet_long(char *);
void __blast_assert()
{
  ERROR:
  {
    reach_error();
    abort();
  }

}

void foo();
int globalSize;
int main()
{
  long int a = __VERIFIER_nondet_long("a");
  globalSize = sizeof(a);
  foo(a);
  return 0;
}

void foo(int a)
{
  ((sizeof(a)) == globalSize) ? (0) : (__blast_assert());
}

