extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "linear-inequality-inv-b.c", 2, "reach_error");
}

extern unsigned char __VERIFIER_nondet_uchar(char *);
int main()
{
  unsigned char n = __VERIFIER_nondet_uchar("n");
  if (n == 0)
  {
    return 0;
  }

  unsigned char v = 0;
  unsigned char s = 0;
  unsigned int i = 0;
  while (i < n)
  {
    v = __VERIFIER_nondet_uchar("v");
    s += v;
    ++i;
  }

  if (s < v)
  {
    reach_error();
    return 1;
  }

  if (s > 65025)
  {
    reach_error();
    return 1;
  }

  return 0;
}

