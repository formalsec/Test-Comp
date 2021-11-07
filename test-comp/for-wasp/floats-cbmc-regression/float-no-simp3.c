extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "float-no-simp3.c", 3, "reach_error");
}

int main()
{
  float fs1 = 2.0f / 6.0f;
  float fs2 = fs1 * 6.0f;
  if (!(((int) fs2) == 2))
  {
    reach_error();
    abort();
  }

}

