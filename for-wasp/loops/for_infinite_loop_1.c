extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "for_infinite_loop_1.c", 3, "reach_error");
}

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

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

int __VERIFIER_nondet_int(char *);
int main()
{
  unsigned int i = 0;
  int x = 0;
  int y = 0;
  int n = __VERIFIER_nondet_int("n");
  if (!(n > 0))
    return 0;

  for (i = 0; 1; i++)
  {
    __VERIFIER_assert(x == 0);
  }

  __VERIFIER_assert(x == 0);
}

