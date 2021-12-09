extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "token_ring.04.cil-2.c", 3, "reach_error");
}

void error(void)
{
  {
    ERROR:
    {
      reach_error();
      abort();
    }

    return;
  }
}

int m_pc = 0;
int t1_pc = 0;
int t2_pc = 0;
int t3_pc = 0;
int t4_pc = 0;
int m_st;
int t1_st;
int t2_st;
int t3_st;
int t4_st;
int m_i;
int t1_i;
int t2_i;
int t3_i;
int t4_i;
int M_E = 2;
int T1_E = 2;
int T2_E = 2;
int T3_E = 2;
int T4_E = 2;
int E_M = 2;
int E_1 = 2;
int E_2 = 2;
int E_3 = 2;
int E_4 = 2;
int is_master_triggered(void);
int is_transmit1_triggered(void);
int is_transmit2_triggered(void);
int is_transmit3_triggered(void);
int is_transmit4_triggered(void);
void immediate_notify(void);
int token;
int __VERIFIER_nondet_int(char *);
int local;
void master(void)
{
  int tmp_var = __VERIFIER_nondet_int("tmp_var");
  {
    if (m_pc == 0)
    {
      goto M_ENTRY;
    }
    else
    {
      if (m_pc == 1)
      {
        goto M_WAIT;
      }
      else
      {
      }

    }

    M_ENTRY:
    ;

    {
      while (1)
      {
        while_0_continue:
        ;

        {
          token = __VERIFIER_nondet_int("token");
          local = token;
          E_1 = 1;
          immediate_notify();
          E_1 = 2;
          m_pc = 1;
          m_st = 2;
        }
        goto return_label;
        M_WAIT:
        ;

        if (token != (local + 4))
        {
          {
            error();
          }
        }
        else
        {
          if (tmp_var <= 5)
          {
            if (tmp_var >= 5)
            {
            }

          }

          if (tmp_var <= 5)
          {
            if (tmp_var >= 5)
            {
              if (tmp_var == 5)
              {
                error();
              }

            }

          }

        }

      }

      while_0_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit1(void)
{
  {
    if (t1_pc == 0)
    {
      goto T1_ENTRY;
    }
    else
    {
      if (t1_pc == 1)
      {
        goto T1_WAIT;
      }
      else
      {
      }

    }

    T1_ENTRY:
    ;

    {
      while (1)
      {
        while_1_continue:
        ;

        t1_pc = 1;
        t1_st = 2;
        goto return_label;
        T1_WAIT:
        {
          token += 1;
          E_2 = 1;
          immediate_notify();
          E_2 = 2;
        }

      }

      while_1_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit2(void)
{
  {
    if (t2_pc == 0)
    {
      goto T2_ENTRY;
    }
    else
    {
      if (t2_pc == 1)
      {
        goto T2_WAIT;
      }
      else
      {
      }

    }

    T2_ENTRY:
    ;

    {
      while (1)
      {
        while_2_continue:
        ;

        t2_pc = 1;
        t2_st = 2;
        goto return_label;
        T2_WAIT:
        {
          token += 1;
          E_3 = 1;
          immediate_notify();
          E_3 = 2;
        }

      }

      while_2_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit3(void)
{
  {
    if (t3_pc == 0)
    {
      goto T3_ENTRY;
    }
    else
    {
      if (t3_pc == 1)
      {
        goto T3_WAIT;
      }
      else
      {
      }

    }

    T3_ENTRY:
    ;

    {
      while (1)
      {
        while_3_continue:
        ;

        t3_pc = 1;
        t3_st = 2;
        goto return_label;
        T3_WAIT:
        {
          token += 1;
          E_4 = 1;
          immediate_notify();
          E_4 = 2;
        }

      }

      while_3_break:
      ;

    }
    return_label:
    return;

  }
}

void transmit4(void)
{
  {
    if (t4_pc == 0)
    {
      goto T4_ENTRY;
    }
    else
    {
      if (t4_pc == 1)
      {
        goto T4_WAIT;
      }
      else
      {
      }

    }

    T4_ENTRY:
    ;

    {
      while (1)
      {
        while_4_continue:
        ;

        t4_pc = 1;
        t4_st = 2;
        goto return_label;
        T4_WAIT:
        {
          token += 1;
          E_M = 1;
          immediate_notify();
          E_M = 2;
        }

      }

      while_4_break:
      ;

    }
    return_label:
    return;

  }
}

int is_master_triggered(void)
{
  int __retres1;
  {
    if (m_pc == 1)
    {
      if (E_M == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit1_triggered(void)
{
  int __retres1;
  {
    if (t1_pc == 1)
    {
      if (E_1 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit2_triggered(void)
{
  int __retres1;
  {
    if (t2_pc == 1)
    {
      if (E_2 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit3_triggered(void)
{
  int __retres1;
  {
    if (t3_pc == 1)
    {
      if (E_3 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

int is_transmit4_triggered(void)
{
  int __retres1;
  {
    if (t4_pc == 1)
    {
      if (E_4 == 1)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
      }

    }
    else
    {
    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

void update_channels(void)
{
  {
    return;
  }
}

void init_threads(void)
{
  {
    if (m_i == 1)
    {
      m_st = 0;
    }
    else
    {
      m_st = 2;
    }

    if (t1_i == 1)
    {
      t1_st = 0;
    }
    else
    {
      t1_st = 2;
    }

    if (t2_i == 1)
    {
      t2_st = 0;
    }
    else
    {
      t2_st = 2;
    }

    if (t3_i == 1)
    {
      t3_st = 0;
    }
    else
    {
      t3_st = 2;
    }

    if (t4_i == 1)
    {
      t4_st = 0;
    }
    else
    {
      t4_st = 2;
    }

    return;
  }
}

int exists_runnable_thread(void)
{
  int __retres1;
  {
    if (m_st == 0)
    {
      __retres1 = 1;
      goto return_label;
    }
    else
    {
      if (t1_st == 0)
      {
        __retres1 = 1;
        goto return_label;
      }
      else
      {
        if (t2_st == 0)
        {
          __retres1 = 1;
          goto return_label;
        }
        else
        {
          if (t3_st == 0)
          {
            __retres1 = 1;
            goto return_label;
          }
          else
          {
            if (t4_st == 0)
            {
              __retres1 = 1;
              goto return_label;
            }
            else
            {
            }

          }

        }

      }

    }

    __retres1 = 0;
    return_label:
    return __retres1;

  }
}

void eval(void)
{
  int tmp;
  {
    {
      while (1)
      {
        while_5_continue:
        ;

        {
          tmp = exists_runnable_thread();
        }
        if (tmp)
        {
        }
        else
        {
          goto while_5_break;
        }

        if (m_st == 0)
        {
          int tmp_ndt_1;
          tmp_ndt_1 = __VERIFIER_nondet_int("tmp_ndt_1");
          if (tmp_ndt_1)
          {
            {
              m_st = 1;
              master();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t1_st == 0)
        {
          int tmp_ndt_2;
          tmp_ndt_2 = __VERIFIER_nondet_int("tmp_ndt_2");
          if (tmp_ndt_2)
          {
            {
              t1_st = 1;
              transmit1();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t2_st == 0)
        {
          int tmp_ndt_3;
          tmp_ndt_3 = __VERIFIER_nondet_int("tmp_ndt_3");
          if (tmp_ndt_3)
          {
            {
              t2_st = 1;
              transmit2();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t3_st == 0)
        {
          int tmp_ndt_4;
          tmp_ndt_4 = __VERIFIER_nondet_int("tmp_ndt_4");
          if (tmp_ndt_4)
          {
            {
              t3_st = 1;
              transmit3();
            }
          }
          else
          {
          }

        }
        else
        {
        }

        if (t4_st == 0)
        {
          int tmp_ndt_5;
          tmp_ndt_5 = __VERIFIER_nondet_int("tmp_ndt_5");
          if (tmp_ndt_5)
          {
            {
              t4_st = 1;
              transmit4();
            }
          }
          else
          {
          }

        }
        else
        {
        }

      }

      while_5_break:
      ;

    }
    return;
  }
}

void fire_delta_events(void)
{
  {
    if (M_E == 0)
    {
      M_E = 1;
    }
    else
    {
    }

    if (T1_E == 0)
    {
      T1_E = 1;
    }
    else
    {
    }

    if (T2_E == 0)
    {
      T2_E = 1;
    }
    else
    {
    }

    if (T3_E == 0)
    {
      T3_E = 1;
    }
    else
    {
    }

    if (T4_E == 0)
    {
      T4_E = 1;
    }
    else
    {
    }

    if (E_M == 0)
    {
      E_M = 1;
    }
    else
    {
    }

    if (E_1 == 0)
    {
      E_1 = 1;
    }
    else
    {
    }

    if (E_2 == 0)
    {
      E_2 = 1;
    }
    else
    {
    }

    if (E_3 == 0)
    {
      E_3 = 1;
    }
    else
    {
    }

    if (E_4 == 0)
    {
      E_4 = 1;
    }
    else
    {
    }

    return;
  }
}

void reset_delta_events(void)
{
  {
    if (M_E == 1)
    {
      M_E = 2;
    }
    else
    {
    }

    if (T1_E == 1)
    {
      T1_E = 2;
    }
    else
    {
    }

    if (T2_E == 1)
    {
      T2_E = 2;
    }
    else
    {
    }

    if (T3_E == 1)
    {
      T3_E = 2;
    }
    else
    {
    }

    if (T4_E == 1)
    {
      T4_E = 2;
    }
    else
    {
    }

    if (E_M == 1)
    {
      E_M = 2;
    }
    else
    {
    }

    if (E_1 == 1)
    {
      E_1 = 2;
    }
    else
    {
    }

    if (E_2 == 1)
    {
      E_2 = 2;
    }
    else
    {
    }

    if (E_3 == 1)
    {
      E_3 = 2;
    }
    else
    {
    }

    if (E_4 == 1)
    {
      E_4 = 2;
    }
    else
    {
    }

    return;
  }
}

void activate_threads(void)
{
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  {
    {
      tmp = is_master_triggered();
    }
    if (tmp)
    {
      m_st = 0;
    }
    else
    {
    }

    {
      tmp___0 = is_transmit1_triggered();
    }
    if (tmp___0)
    {
      t1_st = 0;
    }
    else
    {
    }

    {
      tmp___1 = is_transmit2_triggered();
    }
    if (tmp___1)
    {
      t2_st = 0;
    }
    else
    {
    }

    {
      tmp___2 = is_transmit3_triggered();
    }
    if (tmp___2)
    {
      t3_st = 0;
    }
    else
    {
    }

    {
      tmp___3 = is_transmit4_triggered();
    }
    if (tmp___3)
    {
      t4_st = 0;
    }
    else
    {
    }

    return;
  }
}

void immediate_notify(void)
{
  {
    {
      activate_threads();
    }
    return;
  }
}

void fire_time_events(void)
{
  {
    M_E = 1;
    return;
  }
}

void reset_time_events(void)
{
  {
    if (M_E == 1)
    {
      M_E = 2;
    }
    else
    {
    }

    if (T1_E == 1)
    {
      T1_E = 2;
    }
    else
    {
    }

    if (T2_E == 1)
    {
      T2_E = 2;
    }
    else
    {
    }

    if (T3_E == 1)
    {
      T3_E = 2;
    }
    else
    {
    }

    if (T4_E == 1)
    {
      T4_E = 2;
    }
    else
    {
    }

    if (E_M == 1)
    {
      E_M = 2;
    }
    else
    {
    }

    if (E_1 == 1)
    {
      E_1 = 2;
    }
    else
    {
    }

    if (E_2 == 1)
    {
      E_2 = 2;
    }
    else
    {
    }

    if (E_3 == 1)
    {
      E_3 = 2;
    }
    else
    {
    }

    if (E_4 == 1)
    {
      E_4 = 2;
    }
    else
    {
    }

    return;
  }
}

void init_model(void)
{
  {
    m_i = 1;
    t1_i = 1;
    t2_i = 1;
    t3_i = 1;
    t4_i = 1;
    return;
  }
}

int stop_simulation(void)
{
  int tmp;
  int __retres2;
  {
    {
      tmp = exists_runnable_thread();
    }
    if (tmp)
    {
      __retres2 = 0;
      goto return_label;
    }
    else
    {
    }

    __retres2 = 1;
    return_label:
    return __retres2;

  }
}

void start_simulation(void)
{
  int kernel_st;
  int tmp;
  int tmp___0;
  {
    {
      kernel_st = 0;
      update_channels();
      init_threads();
      fire_delta_events();
      activate_threads();
      reset_delta_events();
    }
    {
      while (1)
      {
        while_6_continue:
        ;

        {
          kernel_st = 1;
          eval();
        }
        {
          kernel_st = 2;
          update_channels();
        }
        {
          kernel_st = 3;
          fire_delta_events();
          activate_threads();
          reset_delta_events();
        }
        {
          tmp = exists_runnable_thread();
        }
        if (tmp == 0)
        {
          {
            kernel_st = 4;
            fire_time_events();
            activate_threads();
            reset_time_events();
          }
        }
        else
        {
        }

        {
          tmp___0 = stop_simulation();
        }
        if (tmp___0)
        {
          goto while_6_break;
        }
        else
        {
        }

      }

      while_6_break:
      ;

    }
    return;
  }
}

int main(void)
{
  int __retres1;
  {
    {
      init_model();
      start_simulation();
    }
    __retres1 = 0;
    return __retres1;
  }
}
