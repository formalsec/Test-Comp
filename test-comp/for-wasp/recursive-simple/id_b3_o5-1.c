extern int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "id_b3_o5-1.c", 4, "reach_error");
}

int id(int x)
{
  if (x == 0)
    return 0;

  int ret = id(x - 1) + 1;
  if (ret > 3)
    return 3;

  return ret;
}

int main(void)
{
  int input = __VERIFIER_nondet_int("input");
  int result = id(input);
  if (result == 5)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

