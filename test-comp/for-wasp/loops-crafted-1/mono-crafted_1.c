extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "mono-crafted_1.c", 3, "reach_error");
}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

int main()
{
  int x = 0;
  int y = 50000;
  int z = 0;
  x = 0;
  while (x < 1000000)
  {
    if (x < 50000)
      x++;
    else
    {
      x++;
      y++;
    }

  }

  while (y > z)
  {
    y--;
    x--;
  }

  __VERIFIER_assert(x == z);
  return 0;
}

