extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "deep-nested.c", 2, "reach_error");
}

int main()
{
  unsigned a;
  unsigned b;
  unsigned c;
  unsigned d;
  unsigned e;
  unsigned uint32_max;
  uint32_max = 0xffffffff;
  for (a = 0; a < (uint32_max - 1); ++a)
  {
    for (b = 0; b < (uint32_max - 1); ++b)
    {
      for (c = 0; c < (uint32_max - 1); ++c)
      {
        for (d = 0; d < (uint32_max - 1); ++d)
        {
          for (e = 0; e < (uint32_max - 1); ++e)
          {
            if (__logand(__logand(__logand(__logand(a == b, b == c), c == d), d == e), e == (uint32_max - 2)))
            {
              {
                reach_error();
              }
            }

          }

        }

      }

    }

  }

  return 0;
}

