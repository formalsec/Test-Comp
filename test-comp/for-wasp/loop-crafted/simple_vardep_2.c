extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "simple_vardep_2.c", 6, "reach_error");
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

  return;
}

int main()
{
  unsigned int i = 0;
  unsigned int j = 0;
  unsigned int k = 0;
  while (k < 0x0fffffff)
  {
    i = i + 1;
    j = j + 2;
    k = k + 3;
    __VERIFIER_assert(__logand(k == (3 * i), j == (2 * i)));
  }

}

