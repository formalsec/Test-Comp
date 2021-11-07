extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test26-1.c", 3, "reach_error");
}

struct dummy
{
  int a;
  int b;
} global = {0, 1};
void assign(int *pa, int *pb)
{
  *pa = *pb;
}

int main()
{
  struct dummy *pd = &global;
  assign(&pd->a, &pd->b);
  if (pd->a != global.b)
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

