extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "recHanoi01.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int counter;
int hanoi(int n)
{
  if (n == 1)
  {
    return 1;
  }

  return (2 * hanoi(n - 1)) + 1;
}

void applyHanoi(int n, int from, int to, int via)
{
  if (n == 0)
  {
    return;
  }

  counter++;
  applyHanoi(n - 1, from, via, to);
  applyHanoi(n - 1, via, to, from);
}

int main()
{
  int n = __VERIFIER_nondet_int("n");
  if (__logor(n < 1, n > 31))
  {
    return 0;
  }

  counter = 0;
  applyHanoi(n, 1, 3, 2);
  int result = hanoi(n);
  if (result == counter)
  {
    return 0;
  }
  else
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

