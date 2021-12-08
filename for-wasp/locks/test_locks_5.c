extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test_locks_5.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int(char *);
int main()
{
  int p1 = __VERIFIER_nondet_int("p1");
  int lk1;
  int p2 = __VERIFIER_nondet_int("p2");
  int lk2;
  int p3 = __VERIFIER_nondet_int("p3");
  int lk3;
  int p4 = __VERIFIER_nondet_int("p4");
  int lk4;
  int p5 = __VERIFIER_nondet_int("p5");
  int lk5;
  int cond;
  while (1)
  {
    cond = __VERIFIER_nondet_int("cond");
    if (cond == 0)
    {
      goto out;
    }
    else
    {
    }

    lk1 = 0;
    lk2 = 0;
    lk3 = 0;
    lk4 = 0;
    lk5 = 0;
    if (p1 != 0)
    {
      lk1 = 1;
    }
    else
    {
    }

    if (p2 != 0)
    {
      lk2 = 1;
    }
    else
    {
    }

    if (p3 != 0)
    {
      lk3 = 1;
    }
    else
    {
    }

    if (p4 != 0)
    {
      lk4 = 1;
    }
    else
    {
    }

    if (p5 != 0)
    {
      lk5 = 1;
    }
    else
    {
    }

    if (p1 != 0)
    {
      if (lk1 != 1)
        goto ERROR;

      lk1 = 0;
    }
    else
    {
    }

    if (p2 != 0)
    {
      if (lk2 != 1)
        goto ERROR;

      lk2 = 0;
    }
    else
    {
    }

    if (p3 != 0)
    {
      if (lk3 != 1)
        goto ERROR;

      lk3 = 0;
    }
    else
    {
    }

    if (p4 != 0)
    {
      if (lk4 != 1)
        goto ERROR;

      lk4 = 0;
    }
    else
    {
    }

    if (p5 != 0)
    {
      if (lk5 != 1)
        goto ERROR;

      lk5 = 0;
    }
    else
    {
    }

  }

  out:
  return 0;

  ERROR:
  {
    reach_error();
    abort();
  }

  return 0;
}

