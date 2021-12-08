extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "BallRajamani-SPIN2000-Fig1.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int g;
int A(int a1, int a2)
{
  if (a1)
  {
    A(a2, a1);
  }
  else
  {
    g = a2;
  }

}

int main()
{
  int g = __VERIFIER_nondet_int("g");
  int h = !g;
  A(g, h);
  A(g, h);
  if (g)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

