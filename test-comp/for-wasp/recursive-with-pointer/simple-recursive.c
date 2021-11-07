extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "simple-recursive.c", 3, "reach_error");
}

void foo(int *p);
void plus(int *p)
{
  (*p)++;
  foo(p);
}

void foo(int *p)
{
  if ((*p) < 20)
  {
    plus(p);
  }
  else
    if ((*p) == 20)
  {
    return;
  }
  else
  {
    ERRORLABEL:
    {
      reach_error();
      abort();
    }

  }


}

int main()
{
  int x = 0;
  int *p = &x;
  *p = 10;
  foo(p);
}

