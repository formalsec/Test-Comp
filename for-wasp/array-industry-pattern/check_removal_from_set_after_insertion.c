extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "check_removal_from_set_after_insertion.c", 3, "reach_error");
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

}

extern int __VERIFIER_nondet_int(char *);
const int SIZE = 100000;
int insert(int set[], int size, int value)
{
  set[size] = value;
  return size + 1;
}

int elem_exists(int set[], int size, int value)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (set[i] == value)
      return 1;

  }

  return 0;
}

int main()
{
  int i;
  int pos;
  int n = 0;
  int found = 0;
  int set[SIZE];
  int values[SIZE];
  int element;
  for (i = 0; i < SIZE; i++)
  {
    set[i] = __VERIFIER_nondet_int("set[i]");
    values[i] = __VERIFIER_nondet_int("values[i]");
  }

  element = __VERIFIER_nondet_int("element");
  int v;
  for (v = 0; v < SIZE; v++)
  {
    if (elem_exists(set, n, values[v]) != 1)
    {
      n = insert(set, n, values[v]);
    }

  }

  for (i = 0; __logand(i < SIZE, found != 1); i++)
  {
    if (set[i] == element)
    {
      found = 1;
      pos = i;
    }

  }

  if (found == 1)
  {
    for (i = pos; i < (SIZE - 1); i++)
    {
      set[i] = set[i + 1];
    }

  }

  if (found == 1)
  {
    for (i = 0; i < (SIZE - 1); i++)
    {
      __VERIFIER_assert(set[i] != element);
    }

  }

}

