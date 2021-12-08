extern unsigned int __VERIFIER_nondet_uint(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "id_o100.c", 4, "reach_error");
}

unsigned int id(unsigned int x)
{
  if (x == 0)
    return 0;

  return id(x - 1) + 1;
}

int main(void)
{
  unsigned int input = __VERIFIER_nondet_uint("input");
  unsigned int result = id(input);
  if (result == 100)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

