extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test02.c", 3, "reach_error");
}

int q;
int main()
{
  int a;
  int b;
  int *p1 = &a;
  int *p2 = p1;
  q = 0;
  if (p1 == p2)
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

