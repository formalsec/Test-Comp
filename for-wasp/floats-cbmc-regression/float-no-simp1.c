extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float-no-simp1.c", 3, "reach_error");
}

int main()
{
  unsigned int i;
  unsigned int j;
  double d;
  i = 100.0;
  d = i;
  j = d;
  if (!(j == 100))
  {
    reach_error();
    abort();
  }

}

