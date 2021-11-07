extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "bubble_sort-1.c", 3, "reach_error");
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

void bubblesort(int size, int item[])
{
  int a;
  int b;
  int t;
  for (a = 1; a < size; ++a)
  {
    for (b = size - 1; b >= a; --b)
    {
      if (__logand((b - 1) < size, b < size))
      {
        if (item[b - 1] > item[b])
        {
          t = item[b - 1];
          item[b - 1] = item[b];
          item[b] = t;
        }

      }

    }

  }

}

void bubblesort1(int size, int item[])
{
  int j;
  int i;
  int pivot;
  for (j = 1; j < size; ++j)
  {
    pivot = item[j];
    i = j - 1;
    while (__logand(i >= 0, item[i] > pivot))
    {
      item[i + 1] = item[i];
      i--;
    }

    item[i + 1] = pivot;
  }

}

int __VERIFIER_nondet_int(char *);
void q1(int argc, char *argv[])
{
  if (argc < 2)
    return;

  int N = __VERIFIER_nondet_int("N");
  int a[N];
  int i;
  switch (2)
  {
    case 0:
      for (i = 0; i < N; ++i)
      a[i] = i;

      break;

    case 1:
      for (i = N - 1; i >= 0; --i)
      a[i] = (N - 1) - i;

      break;

    case 2:
      for (i = 0; i < N; ++i)
      a[i] = i;

      for (i = 0; i < N; i++)
    {
      int r = i + (__VERIFIER_nondet_int("r") % (N - i));
      int temp = a[i];
      a[i] = a[r];
      a[r] = temp;
    }

      break;

  }

  bubblesort(N, a);
}

int main(int argc, char *argv[])
{
  q1(argc, argv);
  return 0;
}

