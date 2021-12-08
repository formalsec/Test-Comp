extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test12.c", 3, "reach_error");
}

void equal(int *a, int *b)
{
  if (a != b)
  {
    goto ERROR;
  }

  return;
  ERROR:
  {
    reach_error();
    abort();
  }

  return;
}

int a;
int b;
int main()
{
  equal(&a, &b);
  return 0;
}

