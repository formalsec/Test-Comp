extern int __VERIFIER_nondet_int(char *);
int bsearch(int i, int j)
{
  if (i >= j)
    return i;

  int mid = (i + j) / 2;
  if (__VERIFIER_nondet_int("if_1"))
    return bsearch(i, mid);

  return bsearch(mid + 1, j);
}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  if (!__logand((-1073741823) <= x, x <= 1073741823))
    return 0;

  if (!__logand((-1073741823) <= y, y <= 1073741823))
    return 0;

  bsearch(x, y);
}

