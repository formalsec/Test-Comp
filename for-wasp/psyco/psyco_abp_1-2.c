int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "psyco_abp_1-2.c", 4, "reach_error");
}

int m_Protocol = 1;
int m_msg_2 = 2;
int m_recv_ack_2 = 3;
int m_msg_1_1 = 4;
int m_msg_1_2 = 5;
int m_recv_ack_1_1 = 6;
int m_recv_ack_1_2 = 7;
int main()
{
  int q = 0;
  int method_id;
  int this_expect = 0;
  int this_buffer_empty = 0;
  while (1)
  {
    int P1 = __VERIFIER_nondet_int("P1");
    int P2 = __VERIFIER_nondet_int("P2");
    int P3 = __VERIFIER_nondet_int("P3");
    int P4 = __VERIFIER_nondet_int("P4");
    int P5 = __VERIFIER_nondet_int("P5");
    int P6 = __VERIFIER_nondet_int("P6");
    int P7 = __VERIFIER_nondet_int("P7");
    int P8 = __VERIFIER_nondet_int("P8");
    int P9 = __VERIFIER_nondet_int("P9");
    if (q == 0)
    {
      if (__VERIFIER_nondet_int("if_1"))
      {
        if (1)
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 1;
          this_expect = 0;
          this_buffer_empty = 1;
        }

        continue;
      }

      continue;
    }

    if (q == 1)
    {
      if (__VERIFIER_nondet_int("if_2"))
      {
        if (!((P1 % 2) != (0 % 2)))
        {
          method_id = 2;
          if (__logor(__logand(__logand((P1 % 2) != (this_expect % 2), this_buffer_empty == 1), !((P1 % 2) != (0 % 2))), __logand(this_buffer_empty != 1, !((P1 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 3;
          this_expect = this_expect + 1;
          this_buffer_empty = 1 - this_buffer_empty;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_3"))
      {
        if (!(P1 != (((0 + 1) - 1) % 2)))
        {
          method_id = 3;
          if (__logand(__logand(P3 == ((this_expect - 1) % 2), this_buffer_empty != 1), !(P3 != (((0 + 1) - 1) % 2))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_4"))
      {
        if (__logand((P1 % 2) != (0 % 2), __logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 4;
          if (__logand(__logand(__logand((P4 % 2) == (this_expect % 2), this_buffer_empty == 1), (P4 % 2) != (0 % 2)), __logand((P4 % 2) != (0 % 2), __logand((P4 % 2) != ((0 + 1) % 2), (P4 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_5"))
      {
        if (__logand((P1 % 2) != (0 % 2), !__logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 5;
          if (__logand(__logand(__logand((P6 % 2) == (this_expect % 2), this_buffer_empty == 1), (P6 % 2) != (0 % 2)), __logand((P6 % 2) != (0 % 2), !__logand((P6 % 2) != ((0 + 1) % 2), (P6 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_6"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), __logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 6;
          if (__logand(__logand(__logand(P8 == ((this_expect - 1) % 2), this_buffer_empty != 1), P8 != (((0 + 1) - 1) % 2)), __logand(P8 != (((0 + 1) - 1) % 2), __logand(P8 != ((((0 + 1) + 1) - 1) % 2), P8 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_7"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), !__logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 7;
          if (__logand(__logand(__logand(P9 == ((this_expect - 1) % 2), this_buffer_empty != 1), P9 != (((0 + 1) - 1) % 2)), __logand(P9 != (((0 + 1) - 1) % 2), !__logand(P9 != ((((0 + 1) + 1) - 1) % 2), P9 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      continue;
    }

    if (q == 2)
    {
      if (__VERIFIER_nondet_int("if_8"))
      {
        if (!((P1 % 2) != (0 % 2)))
        {
          method_id = 2;
          if (__logand(__logand((P1 % 2) == (this_expect % 2), this_buffer_empty == 1), !((P1 % 2) != (0 % 2))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_9"))
      {
        if (!(P1 != (((0 + 1) - 1) % 2)))
        {
          method_id = 3;
          if (__logand(__logand(P3 == ((this_expect - 1) % 2), this_buffer_empty != 1), !(P3 != (((0 + 1) - 1) % 2))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_10"))
      {
        if (__logand((P1 % 2) != (0 % 2), __logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 4;
          if (__logand(__logand(__logand((P4 % 2) == (this_expect % 2), this_buffer_empty == 1), (P4 % 2) != (0 % 2)), __logand((P4 % 2) != (0 % 2), __logand((P4 % 2) != ((0 + 1) % 2), (P4 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_11"))
      {
        if (__logand((P1 % 2) != (0 % 2), !__logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 5;
          if (__logand(__logand(__logand((P6 % 2) == (this_expect % 2), this_buffer_empty == 1), (P6 % 2) != (0 % 2)), __logand((P6 % 2) != (0 % 2), !__logand((P6 % 2) != ((0 + 1) % 2), (P6 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_12"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), __logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 6;
          if (__logand(__logand(__logand(P8 == ((this_expect - 1) % 2), this_buffer_empty != 1), P8 != (((0 + 1) - 1) % 2)), __logand(P8 != (((0 + 1) - 1) % 2), __logand(P8 != ((((0 + 1) + 1) - 1) % 2), P8 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_13"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), !__logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 7;
          if (__logand(__logand(__logand(P9 == ((this_expect - 1) % 2), this_buffer_empty != 1), P9 != (((0 + 1) - 1) % 2)), __logand(P9 != (((0 + 1) - 1) % 2), !__logand(P9 != ((((0 + 1) + 1) - 1) % 2), P9 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      continue;
    }

    if (q == 3)
    {
      if (__VERIFIER_nondet_int("if_14"))
      {
        if (!((P1 % 2) != (0 % 2)))
        {
          method_id = 2;
          if (__logand(__logand((P1 % 2) == (this_expect % 2), this_buffer_empty == 1), !((P1 % 2) != (0 % 2))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_15"))
      {
        if (!(P1 != (((0 + 1) - 1) % 2)))
        {
          method_id = 3;
          if (__logor(__logand(this_buffer_empty == 1, !(P3 != (((0 + 1) - 1) % 2))), __logand(__logand(P3 != ((this_expect - 1) % 2), this_buffer_empty != 1), !(P3 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 4;
          this_expect = this_expect;
          this_buffer_empty = 1 - this_buffer_empty;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_16"))
      {
        if (__logand((P1 % 2) != (0 % 2), __logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 4;
          if (__logand(__logand(__logand((P4 % 2) == (this_expect % 2), this_buffer_empty == 1), (P4 % 2) != (0 % 2)), __logand((P4 % 2) != (0 % 2), __logand((P4 % 2) != ((0 + 1) % 2), (P4 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_17"))
      {
        if (__logand((P1 % 2) != (0 % 2), !__logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 5;
          if (__logand(__logand(__logand((P6 % 2) == (this_expect % 2), this_buffer_empty == 1), (P6 % 2) != (0 % 2)), __logand((P6 % 2) != (0 % 2), !__logand((P6 % 2) != ((0 + 1) % 2), (P6 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_18"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), __logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 6;
          if (__logand(__logand(__logand(P8 == ((this_expect - 1) % 2), this_buffer_empty != 1), P8 != (((0 + 1) - 1) % 2)), __logand(P8 != (((0 + 1) - 1) % 2), __logand(P8 != ((((0 + 1) + 1) - 1) % 2), P8 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_19"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), !__logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 7;
          if (__logand(__logand(__logand(P9 == ((this_expect - 1) % 2), this_buffer_empty != 1), P9 != (((0 + 1) - 1) % 2)), __logand(P9 != (((0 + 1) - 1) % 2), !__logand(P9 != ((((0 + 1) + 1) - 1) % 2), P9 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      continue;
    }

    if (q == 4)
    {
      if (__VERIFIER_nondet_int("if_20"))
      {
        if (!((P1 % 2) != (0 % 2)))
        {
          method_id = 2;
          if (__logand(__logand((P1 % 2) == (this_expect % 2), this_buffer_empty == 1), !((P1 % 2) != (0 % 2))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_21"))
      {
        if (!(P1 != (((0 + 1) - 1) % 2)))
        {
          method_id = 3;
          if (__logand(__logand(P3 == ((this_expect - 1) % 2), this_buffer_empty != 1), !(P3 != (((0 + 1) - 1) % 2))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_22"))
      {
        if (__logand((P1 % 2) != (0 % 2), __logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 4;
          if (__logand(__logand(__logand((P4 % 2) == (this_expect % 2), this_buffer_empty == 1), (P4 % 2) != (0 % 2)), __logand((P4 % 2) != (0 % 2), __logand((P4 % 2) != ((0 + 1) % 2), (P4 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_23"))
      {
        if (__logand((P1 % 2) != (0 % 2), !__logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 5;
          if (__logor(__logand(__logand(__logand((P6 % 2) != (this_expect % 2), this_buffer_empty == 1), (P6 % 2) != (0 % 2)), __logand((P6 % 2) != (0 % 2), !__logand((P6 % 2) != ((0 + 1) % 2), (P6 % 2) != (0 % 2)))), __logand(__logand(this_buffer_empty != 1, (P6 % 2) != (0 % 2)), __logand((P6 % 2) != (0 % 2), !__logand((P6 % 2) != ((0 + 1) % 2), (P6 % 2) != (0 % 2))))))
          {
            goto ERROR;
          }

          q = 5;
          this_expect = this_expect + 1;
          this_buffer_empty = 1 - this_buffer_empty;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_24"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), __logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 6;
          if (__logand(__logand(__logand(P8 == ((this_expect - 1) % 2), this_buffer_empty != 1), P8 != (((0 + 1) - 1) % 2)), __logand(P8 != (((0 + 1) - 1) % 2), __logand(P8 != ((((0 + 1) + 1) - 1) % 2), P8 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_25"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), !__logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 7;
          if (__logand(__logand(__logand(P9 == ((this_expect - 1) % 2), this_buffer_empty != 1), P9 != (((0 + 1) - 1) % 2)), __logand(P9 != (((0 + 1) - 1) % 2), !__logand(P9 != ((((0 + 1) + 1) - 1) % 2), P9 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      continue;
    }

    if (q == 5)
    {
      if (__VERIFIER_nondet_int("if_26"))
      {
        if (!((P1 % 2) != (0 % 2)))
        {
          method_id = 2;
          if (__logand(__logand((P1 % 2) == (this_expect % 2), this_buffer_empty == 1), !((P1 % 2) != (0 % 2))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_27"))
      {
        if (!(P1 != (((0 + 1) - 1) % 2)))
        {
          method_id = 3;
          if (__logand(__logand(P3 == ((this_expect - 1) % 2), this_buffer_empty != 1), !(P3 != (((0 + 1) - 1) % 2))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_28"))
      {
        if (__logand((P1 % 2) != (0 % 2), __logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 4;
          if (__logand(__logand(__logand((P4 % 2) == (this_expect % 2), this_buffer_empty == 1), (P4 % 2) != (0 % 2)), __logand((P4 % 2) != (0 % 2), __logand((P4 % 2) != ((0 + 1) % 2), (P4 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_29"))
      {
        if (__logand((P1 % 2) != (0 % 2), !__logand((P1 % 2) != ((0 + 1) % 2), (P1 % 2) != (0 % 2))))
        {
          method_id = 5;
          if (__logand(__logand(__logand((P6 % 2) == (this_expect % 2), this_buffer_empty == 1), (P6 % 2) != (0 % 2)), __logand((P6 % 2) != (0 % 2), !__logand((P6 % 2) != ((0 + 1) % 2), (P6 % 2) != (0 % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_30"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), __logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 6;
          if (__logand(__logand(__logand(P8 == ((this_expect - 1) % 2), this_buffer_empty != 1), P8 != (((0 + 1) - 1) % 2)), __logand(P8 != (((0 + 1) - 1) % 2), __logand(P8 != ((((0 + 1) + 1) - 1) % 2), P8 != (((0 + 1) - 1) % 2)))))
          {
            goto ERROR;
          }

          q = 2;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_31"))
      {
        if (__logand(P1 != (((0 + 1) - 1) % 2), !__logand(P1 != ((((0 + 1) + 1) - 1) % 2), P1 != (((0 + 1) - 1) % 2))))
        {
          method_id = 7;
          if (__logor(__logand(__logand(this_buffer_empty == 1, P9 != (((0 + 1) - 1) % 2)), __logand(P9 != (((0 + 1) - 1) % 2), !__logand(P9 != ((((0 + 1) + 1) - 1) % 2), P9 != (((0 + 1) - 1) % 2)))), __logand(__logand(__logand(P9 != ((this_expect - 1) % 2), this_buffer_empty != 1), P9 != (((0 + 1) - 1) % 2)), __logand(P9 != (((0 + 1) - 1) % 2), !__logand(P9 != ((((0 + 1) + 1) - 1) % 2), P9 != (((0 + 1) - 1) % 2))))))
          {
            goto ERROR;
          }

          q = 1;
          this_expect = this_expect;
          this_buffer_empty = 1 - this_buffer_empty;
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

