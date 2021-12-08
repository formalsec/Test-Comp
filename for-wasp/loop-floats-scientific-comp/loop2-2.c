extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "loop2-2.c", 7, "reach_error");
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

float pi = 3.14159;
extern float __VERIFIER_nondet_float(char *);
extern int __VERIFIER_nondet_int(char *);
int main()
{
  float x = __VERIFIER_nondet_float("x");
  float octant = pi / 3;
  assume_abort_if_not(__logand(x > octant, x < pi));
  float oddExp = x;
  float evenExp = 1.0;
  float term = x;
  unsigned int count = 2;
  int multFactor = 0;
  int temp;
  while (1)
  {
    term = term * (x / count);
    multFactor = ((count >> (1 % 2)) == 0) ? (1) : (-1);
    evenExp = evenExp + (multFactor * term);
    count++;
    term = term * (x / count);
    oddExp = oddExp + (multFactor * term);
    count++;
    temp = __VERIFIER_nondet_int("temp");
    if (temp == 0)
      break;

  }

  __VERIFIER_assert(oddExp >= evenExp);
  return 0;
}

