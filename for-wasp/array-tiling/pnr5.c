extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "pnr5.c", 3, "reach_error");
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
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

extern int __VERIFIER_nondet_int(char *);
void *malloc(unsigned int size);
int ReadFromPort()
{
  int x = __VERIFIER_nondet_int("x");
  return x;
}

int SIZE;
const int MAX = 100000;
int main()
{
  SIZE = __VERIFIER_nondet_int("SIZE");
  if (__logand(SIZE > 1, SIZE < MAX))
  {
    int i;
    int value;
    int *a = malloc((sizeof(int)) * SIZE);
    int DEFAULTVAL = 0;
    int FIXEDVAL = 10;
    if ((SIZE % 5) != 0)
    {
      return 1;
    }

    assume_abort_if_not((SIZE % 5) == 0);
    for (i = 1; i <= (SIZE / 5); i++)
    {
      value = ReadFromPort();
      if (value != DEFAULTVAL)
      {
        a[(i * 5) - 5] = value;
      }
      else
      {
        a[(i * 5) - 5] = FIXEDVAL;
      }

      value = ReadFromPort();
      if (value != DEFAULTVAL)
      {
        a[(i * 5) - 4] = value;
      }
      else
      {
        a[(i * 5) - 4] = FIXEDVAL;
      }

      value = ReadFromPort();
      if (value != DEFAULTVAL)
      {
        a[(i * 5) - 3] = value;
      }
      else
      {
        a[(i * 5) - 3] = FIXEDVAL;
      }

      value = ReadFromPort();
      if (value != DEFAULTVAL)
      {
        a[(i * 5) - 2] = value;
      }
      else
      {
        a[(i * 5) - 2] = FIXEDVAL;
      }

      value = ReadFromPort();
      if (value != DEFAULTVAL)
      {
        a[(i * 5) - 1] = value;
      }
      else
      {
        a[(i * 5) - 1] = FIXEDVAL;
      }

    }

    for (i = 0; i < SIZE; i++)
    {
      __VERIFIER_assert(a[i] != DEFAULTVAL);
    }

  }

  return 1;
}

