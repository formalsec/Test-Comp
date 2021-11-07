extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test14.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
extern _Bool __VERIFIER_nondet_bool(char *);
int a;
int b;
int *get_dummy()
{
  return (__VERIFIER_nondet_bool("return_1")) ? (&a) : (&b);
}

int main()
{
  int a;
  int b;
  int c = 5;
  a = __VERIFIER_nondet_int("a");
  b = __VERIFIER_nondet_int("b");
  int *pa;
  int *pb;
  int *pc = &c;
  pa = (pb = get_dummy());
  if (__logor(pc == 0, __logand(pa == pb, (*pa) != (*pb))))
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

