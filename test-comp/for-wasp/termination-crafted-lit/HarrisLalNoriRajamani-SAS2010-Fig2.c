extern int __VERIFIER_nondet_int(char *);
int foo(void)
{
  int y = __VERIFIER_nondet_int("y");
  if (__VERIFIER_nondet_int("if_1"))
  {
    if (__VERIFIER_nondet_int("if_2"))
    {
      if (__VERIFIER_nondet_int("if_3"))
      {
        y = 0;
      }
      else
      {
        y = 1;
      }

    }
    else
    {
      if (__VERIFIER_nondet_int("if_4"))
      {
        y = 2;
      }
      else
      {
        y = 3;
      }

    }

  }
  else
  {
    if (__VERIFIER_nondet_int("if_5"))
    {
      if (__VERIFIER_nondet_int("if_6"))
      {
        y = 4;
      }
      else
      {
        y = 5;
      }

    }
    else
    {
      if (__VERIFIER_nondet_int("if_7"))
      {
        y = 6;
      }
      else
      {
        y = 7;
      }

    }

  }

  return y;
}

int main()
{
  int d = 1;
  int x = __VERIFIER_nondet_int("x");
  if (__VERIFIER_nondet_int("if_8"))
  {
    d = d - 1;
  }

  if (__VERIFIER_nondet_int("if_9"))
  {
    foo();
  }

  if (__VERIFIER_nondet_int("if_10"))
  {
    foo();
  }

  if (__VERIFIER_nondet_int("if_11"))
  {
    foo();
  }

  if (__VERIFIER_nondet_int("if_12"))
  {
    foo();
  }

  if (__VERIFIER_nondet_int("if_13"))
  {
    d = d - 1;
  }

  while (x > 0)
  {
    x = x - d;
  }

  return 0;
}

