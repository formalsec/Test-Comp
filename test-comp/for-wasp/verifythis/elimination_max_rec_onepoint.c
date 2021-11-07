extern void *calloc(unsigned int nmemb, unsigned int size);
extern void free(void *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "elimination_max_rec_onepoint.c", 5, "reach_error");
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
    reach_error();
    abort();
  }

}

extern int __VERIFIER_nondet_int(char *);
int check(int x, int y, int *a, int i, int n)
{
  if (x >= y)
    return x;

  __VERIFIER_assert(__logand(0 <= x, y < n));
  assume_abort_if_not(__logand(0 <= i, i < n));
  int x0 = x;
  int y0 = y;
  if (a[x] <= a[y])
    x++;
  else
    y--;

  int x1 = check(x, y, a, i, n);
  int ai = a[i];
  int ax = a[x1];
  __VERIFIER_assert(ai <= ax);
  return x1;
}

int main()
{
  int n = __VERIFIER_nondet_int("n");
  assume_abort_if_not(n >= 0);
  int i = __VERIFIER_nondet_int("i");
  assume_abort_if_not(__logand(__logand(0 <= i, i < n), n < (1 << 30)));
  int *a = calloc(n, sizeof(int));
  int x = check(0, n - 1, a, i, n);
  int ai = a[i];
  int ax = a[x];
  __VERIFIER_assert(ai <= ax);
  free(a);
  return x;
}

