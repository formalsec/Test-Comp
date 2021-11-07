extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "loop1-1.c", 8, "reach_error");
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

}

extern float __VERIFIER_nondet_float(char *);
extern int __VERIFIER_nondet_int(char *);
int main()
{
  float x = __VERIFIER_nondet_float("x");
  assume_abort_if_not(x > (-1.0));
  assume_abort_if_not(x < 1.0);
  float exp = 1.0;
  float term = 1.0;
  unsigned int count = 1;
  float result = 2 * (1 / (1 - x));
  int temp;
  while (1)
  {
    term = term * (x / count);
    exp = exp + term;
    count++;
    temp = __VERIFIER_nondet_int("temp");
    if (temp == 0)
      break;

  }

  __VERIFIER_assert(result >= exp);
  return 0;
}

