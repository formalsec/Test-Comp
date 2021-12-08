extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test30-2.c", 3, "reach_error");
}

int a = 1;
int b;
struct dummy
{
  int *a;
  int *b;
} global = {&a, &b};
void assign(int *pa, int *pb)
{
  *pa = *pb;
}

void assign2(int **pa, int **pb)
{
  assign(*pb, *pb);
}

int main()
{
  struct dummy *pd = &global;
  assign2(&pd->a, &pd->b);
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

