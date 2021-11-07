int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "psyco_security.c", 4, "reach_error");
}

int m_initSign = 1;
int m_initVerify = 2;
int m_Signature = 3;
int m_sign = 4;
int m_verify = 5;
int m_update = 6;
int main()
{
  int q = 0;
  int method_id;
  int this_state = 0;
  while (1)
  {
    if (q == 0)
    {
      if (__VERIFIER_nondet_int("if_1"))
      {
        if (1)
        {
          method_id = 3;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_state = 0;
        }

        continue;
      }

      continue;
    }

    if (q == 1)
    {
      if (__VERIFIER_nondet_int("if_2"))
      {
        if (1)
        {
          method_id = 4;
          if (this_state == 2)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_3"))
      {
        if (1)
        {
          method_id = 5;
          if (this_state == 3)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_4"))
      {
        if (1)
        {
          method_id = 6;
          if (__logor(__logand(this_state == 2, this_state != 3), this_state == 3))
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      continue;
    }

    if (q == 2)
    {
      if (__VERIFIER_nondet_int("if_5"))
      {
        if (1)
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_state = 2;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_6"))
      {
        if (1)
        {
          method_id = 2;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_state = 3;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_7"))
      {
        if (1)
        {
          method_id = 4;
          if (this_state == 2)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_8"))
      {
        if (1)
        {
          method_id = 5;
          if (this_state == 3)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_9"))
      {
        if (1)
        {
          method_id = 6;
          if (__logor(__logand(this_state == 2, this_state != 3), this_state == 3))
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      continue;
    }

    if (q == 3)
    {
      if (__VERIFIER_nondet_int("if_10"))
      {
        if (1)
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_state = 2;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_11"))
      {
        if (1)
        {
          method_id = 2;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_state = 3;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_12"))
      {
        if (1)
        {
          method_id = 4;
          if (this_state != 2)
          {
            goto ERROR;
          }

          q = 3;
          this_state = this_state;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_13"))
      {
        if (1)
        {
          method_id = 5;
          if (this_state == 3)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_14"))
      {
        if (__logand(1, __logor(__logand(this_state == 2, this_state != 3), __logand(this_state != 2, this_state != 3))))
        {
          method_id = 6;
          if (__logand(this_state != 2, this_state != 3))
          {
            goto ERROR;
          }

          q = 3;
          this_state = this_state;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_15"))
      {
        if (__logand(__logand(1, __logor(__logand(this_state == 2, this_state != 3), __logand(this_state != 2, this_state != 3))), __logor(this_state == 3, __logand(this_state != 2, this_state != 3))))
        {
          method_id = 6;
          if (__logand(this_state != 2, this_state != 3))
          {
            goto ERROR;
          }

          q = 3;
          this_state = this_state;
        }

        continue;
      }

      continue;
    }

    if (q == 4)
    {
      if (__VERIFIER_nondet_int("if_16"))
      {
        if (1)
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_state = 2;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_17"))
      {
        if (1)
        {
          method_id = 2;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_state = 3;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_18"))
      {
        if (1)
        {
          method_id = 4;
          if (this_state == 2)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_19"))
      {
        if (1)
        {
          method_id = 5;
          if (this_state != 3)
          {
            goto ERROR;
          }

          q = 4;
          this_state = this_state;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_20"))
      {
        if (__logand(1, __logor(__logand(this_state == 2, this_state != 3), __logand(this_state != 2, this_state != 3))))
        {
          method_id = 6;
          if (__logand(this_state != 2, this_state != 3))
          {
            goto ERROR;
          }

          q = 4;
          this_state = this_state;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_21"))
      {
        if (__logand(__logand(1, __logor(__logand(this_state == 2, this_state != 3), __logand(this_state != 2, this_state != 3))), __logor(this_state == 3, __logand(this_state != 2, this_state != 3))))
        {
          method_id = 6;
          if (__logand(this_state != 2, this_state != 3))
          {
            goto ERROR;
          }

          q = 4;
          this_state = this_state;
        }

        continue;
      }

      continue;
    }

  }

  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

}

