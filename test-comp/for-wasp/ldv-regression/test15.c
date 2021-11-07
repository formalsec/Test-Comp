extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test15.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
void assign(int *pa, int *pb)
{
  *pa = *pb;
}

int main()
{
  int a;
  int b;
  b = __VERIFIER_nondet_int("b");
  assign(&a, &b);
  if (a != b)
  {
    goto ERROR;
  }

  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

