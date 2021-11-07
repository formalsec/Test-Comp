extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "interpolation.c", 3, "reach_error");
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

int main()
{
  int i;
  float z;
  float t;
  float min[] = {5, 10, 12, 30, 150};
  float max[] = {10, 12, 30, 150, 300};
  t = __VERIFIER_nondet_float("t");
  assume_abort_if_not(__logand(t >= min[0], t <= max[((sizeof(max)) / (sizeof(max[0]))) - 1]));
  for (i = 0; i < ((sizeof(min)) / (sizeof(min[0]))); i++)
  {
    if (t <= max[i])
      break;

  }

  z = (t - min[i]) / (max[i] - min[i]);
  __VERIFIER_assert(__logand(z >= 0.f, z <= 1.f));
  return 0;
}

