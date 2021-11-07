extern void *calloc(unsigned int nmemb, unsigned int size);
extern void free(void *);
extern int __VERIFIER_nondet_int(char *);
extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "lcp.c", 11, "reach_error");
}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    reach_error();
    abort();
  }

}

int lcp(int *a, int n, int x, int y)
{
  int l = 0;
  while (__logand(__logand((x + l) < n, (y + l) < n), a[x + l] == a[y + l]))
  {
    l++;
  }

  return l;
}

void check(int *a, int n, int x, int y, int l)
{
  int i = __VERIFIER_nondet_int("i");
  assume_abort_if_not(__logand(0 <= i, i < l));
  __VERIFIER_assert(a[x + i] == a[y + i]);
  if (__logand((x + l) < n, (y + l) < n))
    __VERIFIER_assert(a[x + l] != a[y + l]);

}

int main()
{
  int n = __VERIFIER_nondet_int("n");
  assume_abort_if_not(__logand(n >= 0, n < (1 << 30)));
  int *a = calloc(n, sizeof(int));
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  assume_abort_if_not(__logand(x >= 0, y >= 0));
  int l = lcp(a, n, x, y);
  check(a, n, x, y, l);
  free(a);
  return 0;
}

