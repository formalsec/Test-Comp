extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "signextension2-1.c", 3, "reach_error");
}

int main()
{
  unsigned int allOne = -1;
  int castToInt = allOne;
  long castToLong = allOne;
  long castToLong2 = castToInt;
  unsigned long castToULong = allOne;
  if (__logor(__logor(__logor(castToInt != (-1), castToLong != 4294967295UL), castToLong2 != (-1)), castToULong != 4294967295UL))
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

