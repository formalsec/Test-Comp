extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test18.c", 3, "reach_error");
}

void g(int **ppa, int **ppb)
{
  *ppa = *ppb;
}

void f(int *pa, int *pb)
{
  g(&pa, &pb);
  *pa = 0;
}

int main()
{
  int a;
  int b;
  f(&a, &b);
  if (b != 0)
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

