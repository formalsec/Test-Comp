extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test04.c", 3, "reach_error");
}

int f(int *p1, int *p2)
{
  return p1 == p2;
}

int main()
{
  int a;
  int b;
  int *p1 = &a;
  int *p2 = &b;
  a = f(p1, p2);
  if (*p1)
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

