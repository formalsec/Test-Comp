extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "bary_diverge.c", 3, "reach_error");
}

extern float __VERIFIER_nondet_float(char *);
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

typedef enum 
{
  FALSE = 0,
  TRUE = 1
} BOOLEAN;
BOOLEAN INIT;
float C1;
float I;
float RANDOM_INPUT()
{
  float x;
  x = __VERIFIER_nondet_float("x");
  assume_abort_if_not(__logand(x >= (-1.f), x <= 1.f));
  return x;
}

void wait_for_clock()
{
}

void bary()
{
  static float X;
  static float Y;
  static float Z;
  if (C1 > 0.f)
  {
    Z = Y;
    Y = X;
  }

  if (INIT == TRUE)
  {
    X = I;
    Y = I;
    Z = I;
  }
  else
  {
    X = ((0.50000001f * X) + (0.30000001f * Y)) + (0.20000001f * Z);
  }

  __VERIFIER_assert(__logand(X >= (-5.f), X <= 5.f));
}

int main()
{
  int i;
  INIT = TRUE;
  C1 = RANDOM_INPUT();
  I = RANDOM_INPUT();
  for (i = 0; i < 3600000; i++)
  {
    bary();
    INIT = (BOOLEAN) RANDOM_INPUT();
    C1 = RANDOM_INPUT();
    I = RANDOM_INPUT();
    wait_for_clock();
  }

  return 0;
}

