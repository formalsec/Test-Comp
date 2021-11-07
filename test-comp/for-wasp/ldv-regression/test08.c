extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test08.c", 3, "reach_error");
}

int a;
int b;
int *p1;
int *p2;
int f()
{
  int v = ((*p1) + (*p2)) - a;
  if (v == 1)
  {
    p1 = p2;
    return v;
  }
  else
  {
    return 0;
  }

}

int main()
{
  p1 = &a;
  p2 = &b;
  b = 1;
  a = 5;
  a--;
  a = f();
  if (__logand(a, p1 == p2))
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

