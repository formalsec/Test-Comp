extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float13.c", 3, "reach_error");
}

const float plus_infinity = 1.0f / 0.0f;
const float minus_infinity = 0.0f / (-0.0f);
const float NaN = 0.0f * (1.0f / 0.0f);
int main()
{
  _Bool temp;
  temp = NaN < plus_infinity;
  if (!(!temp))
  {
    reach_error();
    abort();
  }

  temp = NaN < minus_infinity;
  if (!(!temp))
  {
    reach_error();
    abort();
  }

  temp = NaN <= NaN;
  if (!(!temp))
  {
    reach_error();
    abort();
  }

  temp = NaN >= NaN;
  if (!(!temp))
  {
    reach_error();
    abort();
  }

  temp = NaN > plus_infinity;
  if (!(!temp))
  {
    reach_error();
    abort();
  }

  temp = NaN > minus_infinity;
  if (!(!temp))
  {
    reach_error();
    abort();
  }

  temp = NaN > 0;
  if (!(!temp))
  {
    reach_error();
    abort();
  }

  temp = NaN < 0;
  if (!(!temp))
  {
    reach_error();
    abort();
  }

  return 0;
}

