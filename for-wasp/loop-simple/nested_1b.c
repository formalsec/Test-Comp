extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "nested_1b.c", 13, "reach_error");
}

int main()
{
  int a = 6;
  for (a = 0; a < 6; ++a)
  {
  }

  if (a == 6)
  {
    reach_error();
  }

  return 1;
}

