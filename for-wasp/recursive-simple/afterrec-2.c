extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "afterrec-2.c", 3, "reach_error");
}

void f(int n)
{
  if (n < 3)
    return;

  n--;
  f(n);
  ERROR:
  {
    reach_error();
    abort();
  }

}

int main(void)
{
  f(2);
}

