extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "mono-crafted_6.c", 3, "reach_error");
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
  int y = 500000;
  int z = 0;
  x = 0;
  while (x < 1000000)
  {
    if (x < 500000)
      x++;
    else
    {
      if (x < 750000)
      {
        x++;
      }
      else
      {
        x = x + 2;
      }

      y++;
    }

  }

  __VERIFIER_assert(x == 1000000);
  return 0;
}

