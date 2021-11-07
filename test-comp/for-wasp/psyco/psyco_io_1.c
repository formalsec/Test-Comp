int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "psyco_io_1.c", 4, "reach_error");
}

int m_flush = 1;
int m_PipedOutputStream = 2;
int m_close = 3;
int m_write = 4;
int m_connect_1 = 5;
int m_connect_2 = 6;
int main()
{
  int q = 0;
  int method_id;
  int this_sink = 0;
  int this_sinkConnected = 0;
  while (1)
  {
    int P1 = __VERIFIER_nondet_int("P1");
    int P2 = __VERIFIER_nondet_int("P2");
    int P3 = __VERIFIER_nondet_int("P3");
    int P4 = __VERIFIER_nondet_int("P4");
    if (q == 0)
    {
      if (__VERIFIER_nondet_int("if_1"))
      {
        if (1)
        {
          method_id = 2;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_sink = 0;
          this_sinkConnected = 0;
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
          if (this_sink != 0)
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
        if (__logand(P2 != 1, P1 != 0))
        {
          method_id = 5;
          if (__logand(P2 != 1, __logand(this_sink == 0, P1 != 0)))
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
        if (!__logand(P2 != 1, P1 != 0))
        {
          method_id = 6;
          if (0)
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
        if (__logand(1, __logor(this_sink != 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_6"))
      {
        if (__logand(__logand(1, __logor(this_sink != 0, 0)), __logor(this_sink == 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_7"))
      {
        if (__logand(1, __logor(this_sink != 0, 0)))
        {
          method_id = 3;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_8"))
      {
        if (__logand(__logand(1, __logor(this_sink != 0, 0)), __logor(this_sink == 0, 0)))
        {
          method_id = 3;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_9"))
      {
        if (1)
        {
          method_id = 4;
          if (this_sink != 0)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_10"))
      {
        if (__logand(P2 != 1, P1 != 0))
        {
          method_id = 5;
          if (__logand(__logand(this_sink != 0, P1 != 0), __logand(P2 != 1, P1 != 0)))
          {
            goto ERROR;
          }

          q = 3;
          this_sink = P1;
          this_sinkConnected = 1;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_11"))
      {
        if (!__logand(P2 != 1, P1 != 0))
        {
          method_id = 6;
          if (0)
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
      if (__VERIFIER_nondet_int("if_12"))
      {
        if (__logand(1, __logor(this_sink != 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_13"))
      {
        if (__logand(__logand(1, __logor(this_sink != 0, 0)), __logor(this_sink == 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_14"))
      {
        if (__logand(1, __logor(this_sink != 0, 0)))
        {
          method_id = 3;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_15"))
      {
        if (__logand(__logand(1, __logor(this_sink != 0, 0)), __logor(this_sink == 0, 0)))
        {
          method_id = 3;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_16"))
      {
        if (1)
        {
          method_id = 4;
          if (this_sink == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_sink = this_sink;
          this_sinkConnected = this_sinkConnected;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_17"))
      {
        if (__logand(P2 != 1, P1 != 0))
        {
          method_id = 5;
          if (__logand(P2 != 1, __logand(this_sink == 0, P1 != 0)))
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_18"))
      {
        if (!__logand(P2 != 1, P1 != 0))
        {
          method_id = 6;
          if (0)
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

  }

  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

}

