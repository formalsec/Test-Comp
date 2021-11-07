extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "theatreSquare.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
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

int correct_version(int n, int m, int a)
{
  int i = 0;
  int j = 0;
  int b = 0;
  int l = 0;
  while (b < n)
  {
    b = b + a;
    i = i + 1;
  }

  while (l < m)
  {
    l = l + a;
    j = j + 1;
  }

  int x = 0;
  int y = 0;
  while (x < i)
  {
    y = y + j;
    x = x + 1;
  }

  return y;
}

int student_version(int n, int m, int a)
{
  int i = 0;
  int j = 0;
  int b = 0;
  int l = 0;
  while (b < n)
  {
    b = b + a;
    i = i + 1;
  }

  while (l < m)
  {
    l = l + a;
    j = j + 1;
  }

  int x = 0;
  int y = 0;
  while (x < i)
  {
    y = y + j;
    x = x + 1;
  }

  return y;
}

int main()
{
  int a = __VERIFIER_nondet_int("a");
  int n = __VERIFIER_nondet_int("n");
  int m = __VERIFIER_nondet_int("m");
  int n_stones1;
  int n_stones2 = __VERIFIER_nondet_int("n_stones2");
  n_stones1 = n_stones2;
  if (__logand(__logand(__logand(__logand(__logand(1 <= n, 1 <= m), 1 <= a), n <= 109), m <= 109), a <= 109))
  {
    n_stones1 = correct_version(n, m, a);
    n_stones2 = student_version(n, m, a);
  }

  __VERIFIER_assert(n_stones1 == n_stones2);
  return 0;
}

