int __return_main;
void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "interpolation.c.p+cfa-reducer.c", 4, "reach_error");
}

float __VERIFIER_nondet_float(char *);
void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

void __VERIFIER_assert(int cond);
int main();
int main()
{
  int main__i;
  float main__z;
  float main__t;
  float main__min[5] = {5, 10, 12, 30, 150};
  float main__max[5] = {10, 12, 30, 150, 300};
  main__t = __VERIFIER_nondet_float("main__t");
  int main____CPAchecker_TMP_0;
  if (main__t >= main__min[0])
  {
    if (main__t <= main__max[4UL])
    {
      main____CPAchecker_TMP_0 = 1;
      label_63:
      ;

      if (main____CPAchecker_TMP_0 != 0)
      {
        main__i = 0;
        label_67:
        ;

        if (main__i < 5UL)
        {
          if (main__t <= main__max[main__i])
          {
            label_69:
            ;

            main__z = (main__t - main__min[main__i]) / (main__max[main__i] - main__min[main__i]);
            int main____CPAchecker_TMP_1;
            if (main__z >= 0.0)
            {
              if (main__z <= 1.0)
              {
                main____CPAchecker_TMP_1 = 1;
                label_78:
                ;

                {
                  int __tmp_1;
                  __tmp_1 = main____CPAchecker_TMP_1;
                  int __VERIFIER_assert__cond;
                  __VERIFIER_assert__cond = __tmp_1;
                  if (__VERIFIER_assert__cond == 0)
                  {
                    {
                      reach_error();
                    }
                    return __return_main;
                  }
                  else
                  {
                    return __return_main;
                  }

                }
              }
              else
              {
                label_76:
                ;

                main____CPAchecker_TMP_1 = 0;
                goto label_78;
              }

            }
            else
            {
              goto label_76;
            }

          }
          else
          {
            main__i = main__i + 1;
            goto label_67;
          }

        }
        else
        {
          goto label_69;
        }

      }
      else
      {
        return __return_main;
      }

    }
    else
    {
      label_61:
      ;

      main____CPAchecker_TMP_0 = 0;
      goto label_63;
    }

  }
  else
  {
    goto label_61;
  }

}
