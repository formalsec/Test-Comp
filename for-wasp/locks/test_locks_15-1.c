extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "test_locks_15-1.c", 3, "reach_error");
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
  int p6 = __VERIFIER_nondet_int("p6");
  int lk6;
  int p7 = __VERIFIER_nondet_int("p7");
  int lk7;
  int p8 = __VERIFIER_nondet_int("p8");
  int lk8;
  int p9 = __VERIFIER_nondet_int("p9");
  int lk9;
  int p10 = __VERIFIER_nondet_int("p10");
  int lk10;
  int p11 = __VERIFIER_nondet_int("p11");
  int lk11;
  int p12 = __VERIFIER_nondet_int("p12");
  int lk12;
  int p13 = __VERIFIER_nondet_int("p13");
  int lk13;
  int p14 = __VERIFIER_nondet_int("p14");
  int lk14;
  int p15 = __VERIFIER_nondet_int("p15");
  int lk15;
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
    lk6 = 0;
    lk7 = 0;
    lk8 = 0;
    lk9 = 0;
    lk10 = 0;
    lk11 = 0;
    lk12 = 0;
    lk13 = 0;
    lk14 = 0;
    lk15 = 0;
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

    if (p6 != 0)
    {
      lk6 = 1;
    }
    else
    {
    }

    if (p7 != 0)
    {
      lk7 = 1;
    }
    else
    {
    }

    if (p8 != 0)
    {
      lk8 = 1;
    }
    else
    {
    }

    if (p9 != 0)
    {
      lk9 = 1;
    }
    else
    {
    }

    if (p10 != 0)
    {
      lk10 = 1;
    }
    else
    {
    }

    if (p11 != 0)
    {
      lk11 = 1;
    }
    else
    {
    }

    if (p12 != 0)
    {
      lk12 = 1;
    }
    else
    {
    }

    if (p13 != 0)
    {
      lk13 = 1;
    }
    else
    {
    }

    if (p14 != 0)
    {
      lk14 = 1;
    }
    else
    {
    }

    if (p15 != 0)
    {
      lk15 = 1;
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
      goto ERROR;
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

    if (p6 != 0)
    {
      if (lk6 != 1)
        goto ERROR;

      lk6 = 0;
    }
    else
    {
    }

    if (p7 != 0)
    {
      if (lk7 != 1)
        goto ERROR;

      lk7 = 0;
    }
    else
    {
    }

    if (p8 != 0)
    {
      if (lk8 != 1)
        goto ERROR;

      lk8 = 0;
    }
    else
    {
    }

    if (p9 != 0)
    {
      if (lk9 != 1)
        goto ERROR;

      lk9 = 0;
    }
    else
    {
    }

    if (p10 != 0)
    {
      if (lk10 != 1)
        goto ERROR;

      lk10 = 0;
    }
    else
    {
    }

    if (p11 != 0)
    {
      if (lk11 != 1)
        goto ERROR;

      lk11 = 0;
    }
    else
    {
    }

    if (p12 != 0)
    {
      if (lk12 != 1)
        goto ERROR;

      lk12 = 0;
    }
    else
    {
    }

    if (p13 != 0)
    {
      if (lk13 != 1)
        goto ERROR;

      lk13 = 0;
    }
    else
    {
    }

    if (p14 != 0)
    {
      if (lk14 != 1)
        goto ERROR;

      lk14 = 0;
    }
    else
    {
      goto ERROR;
    }

    if (p15 != 0)
    {
      if (lk15 != 1)
        goto ERROR;

      lk15 = 0;
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

