extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test27-2.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
struct dummy
{
  int *array;
};
struct cont
{
  struct dummy **array;
};
int check(struct cont *pc, int i)
{
  return pc->array[i]->array[i] == i;
}

int main()
{
  struct cont cont;
  struct dummy dummy;
  struct dummy *dummies[10];
  int a[10];
  int i;
  int *pa;
  i = __VERIFIER_nondet_int("i");
  for (int j = 0; j < 10; j++)
  {
    a[j] = __VERIFIER_nondet_int("a[j]");
    dummies[j] = 0;
  }

  if (__logand(i >= 0, i < 9))
  {
    a[i] = i;
    dummy.array = &a[i];
    dummies[i + 1] = &dummy;
    cont.array = &dummies[0];
    pa = &cont.array[i]->array[i];
    if (a[i] > 0)
    {
      i = dummies[i + 1]->array[i] - 10;
      while (i < (*pa))
      {
        ++i;
      }

      if (!check(&cont, i))
      {
        goto ERROR;
      }

    }

  }

  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

