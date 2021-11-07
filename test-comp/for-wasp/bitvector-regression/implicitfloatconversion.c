extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "implicitfloatconversion.c", 3, "reach_error");
}

int main()
{
  float f = 1;
  int i = f;
  if (i == 1)
  {
    goto ERROR;
  }

  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return -1;
}

