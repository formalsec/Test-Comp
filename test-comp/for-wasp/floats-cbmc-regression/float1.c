extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float1.c", 3, "reach_error");
}

int main()
{
  double x;
  int y;
  x = 2;
  x -= 0.6;
  y = x;
  if (!(y == 1))
  {
    reach_error();
    abort();
  }

  x = 2;
  x -= 0.4;
  y = x;
  if (!(y == 1))
  {
    reach_error();
    abort();
  }

}

