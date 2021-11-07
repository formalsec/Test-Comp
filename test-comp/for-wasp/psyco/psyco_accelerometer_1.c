int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "psyco_accelerometer_1.c", 4, "reach_error");
}

int m_init = 1;
int m_disconnect = 2;
int m_getValueX = 3;
int m_getValueY = 4;
int m_Accelerometer = 5;
int m_update = 6;
int m_dataReceived = 7;
int m_connect_1 = 8;
int m_connect_2 = 9;
int main()
{
  int q = 0;
  int method_id;
  int this_m_conn = 0;
  int this_m_sensitivity = 100;
  int this_m_samples = 200;
  int this_m_delta = 1;
  int this_m_accX = 0;
  int this_m_sensorInfo = 0;
  int this_m_conn_data_listener = 0;
  int this_m_accY = 0;
  while (1)
  {
    int P1 = __VERIFIER_nondet_int("P1");
    int P2 = __VERIFIER_nondet_int("P2");
    int P3 = __VERIFIER_nondet_int("P3");
    _Bool P4 = __VERIFIER_nondet_int("P4");
    _Bool P5 = __VERIFIER_nondet_int("P5");
    _Bool P6 = __VERIFIER_nondet_int("P6");
    if (q == 0)
    {
      if (__VERIFIER_nondet_int("if_1"))
      {
        if (1)
        {
          method_id = 5;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_m_conn = 0;
          this_m_samples = 200;
          this_m_sensitivity = 100;
          this_m_accX = 0;
          this_m_accY = 0;
          this_m_delta = 1;
          this_m_sensorInfo = 0;
          this_m_conn_data_listener = 0;
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
          method_id = 2;
          if (this_m_conn != 0)
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
          method_id = 3;
          if (this_m_delta != 0)
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
          method_id = 4;
          if (this_m_delta != 0)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_5"))
      {
        if (1)
        {
          method_id = 6;
          if (this_m_conn != 0)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_6"))
      {
        if (1)
        {
          method_id = 7;
          if (__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), __logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), __logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), __logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), __logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) <= 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) <= 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))))
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
      if (__VERIFIER_nondet_int("if_7"))
      {
        if (__logand(1, __logor(P1 != 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = 1;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_8"))
      {
        if (__logand(__logand(1, __logor(P1 != 0, 0)), __logor(P1 == 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 2;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_9"))
      {
        if (1)
        {
          method_id = 2;
          if (this_m_conn != 0)
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
        if (1)
        {
          method_id = 3;
          if (this_m_delta == 0)
          {
            goto ERROR;
          }

          q = 2;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_11"))
      {
        if (1)
        {
          method_id = 4;
          if (this_m_delta == 0)
          {
            goto ERROR;
          }

          q = 2;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_12"))
      {
        if (1)
        {
          method_id = 6;
          if (this_m_conn != 0)
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_13"))
      {
        if (1)
        {
          method_id = 7;
          if (__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), __logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), __logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), __logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), __logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) <= 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) <= 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))))
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
        if (__logand(P1, __logor(__logand(P5, this_m_conn == 0), 0)))
        {
          method_id = 8;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = 1;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = 1;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_15"))
      {
        if (__logand(__logand(P1, __logor(__logand(P5, this_m_conn == 0), 0)), __logor(__logand(this_m_conn != 0, P5), 0)))
        {
          method_id = 8;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_16"))
      {
        if (__logand(!P1, __logor(__logand(!P6, this_m_conn == 0), 0)))
        {
          method_id = 9;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = 1;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_17"))
      {
        if (__logand(__logand(!P1, __logor(__logand(!P6, this_m_conn == 0), 0)), __logor(__logand(this_m_conn != 0, !P6), 0)))
        {
          method_id = 9;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      continue;
    }

    if (q == 3)
    {
      if (__VERIFIER_nondet_int("if_18"))
      {
        if (__logand(1, __logor(P1 != 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = 1;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_19"))
      {
        if (__logand(__logand(1, __logor(P1 != 0, 0)), __logor(P1 == 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_20"))
      {
        if (1)
        {
          method_id = 2;
          if (this_m_conn == 0)
          {
            goto ERROR;
          }

          q = 2;
          this_m_conn = 0;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = 0;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_21"))
      {
        if (1)
        {
          method_id = 3;
          if (this_m_delta == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_22"))
      {
        if (1)
        {
          method_id = 4;
          if (this_m_delta == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_23"))
      {
        if (1)
        {
          method_id = 6;
          if (this_m_conn == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_24"))
      {
        if (__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = -950;
          this_m_accY = -950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_25"))
      {
        if (__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = -950;
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_26"))
      {
        if (__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = -950;
          this_m_accY = ((-P3) - 50) * (P3 / (-P3));
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_27"))
      {
        if (__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = -950;
          this_m_accY = 950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_28"))
      {
        if (__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = -950;
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_29"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = -950;
          this_m_accY = (P3 - 50) * (P3 / P3);
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_30"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = -950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_31"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = ((-P2) - 50) * (P2 / (-P2));
          this_m_accY = -950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_32"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_33"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = ((-P3) - 50) * (P3 / (-P3));
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_34"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = ((-P2) - 50) * (P2 / (-P2));
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_35"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = ((-P2) - 50) * (P2 / (-P2));
          this_m_accY = ((-P3) - 50) * (P3 / (-P3));
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_36"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = 950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_37"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = ((-P2) - 50) * (P2 / (-P2));
          this_m_accY = 950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_38"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_39"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = (P3 - 50) * (P3 / P3);
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_40"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = ((-P2) - 50) * (P2 / (-P2));
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_41"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = ((-P2) - 50) * (P2 / (-P2));
          this_m_accY = (P3 - 50) * (P3 / P3);
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_42"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 950;
          this_m_accY = -950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_43"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 950;
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_44"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 950;
          this_m_accY = ((-P3) - 50) * (P3 / (-P3));
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_45"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 950;
          this_m_accY = 950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_46"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 950;
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_47"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 950;
          this_m_accY = (P3 - 50) * (P3 / P3);
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_48"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = -950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_49"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = (P2 - 50) * (P2 / P2);
          this_m_accY = -950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_50"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_51"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = ((-P3) - 50) * (P3 / (-P3));
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_52"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = (P2 - 50) * (P2 / P2);
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_53"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = (P2 - 50) * (P2 / P2);
          this_m_accY = ((-P3) - 50) * (P3 / (-P3));
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_54"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = 950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_55"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = (P2 - 50) * (P2 / P2);
          this_m_accY = 950;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_56"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_57"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = 0;
          this_m_accY = (P3 - 50) * (P3 / P3);
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_58"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = (P2 - 50) * (P2 / P2);
          this_m_accY = 0;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_59"))
      {
        if (__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(__logand(1, __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P2 - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) <= 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)), __logor(__logand((P3 - 50) > 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), this_m_conn_data_listener == 0)))
        {
          method_id = 7;
          if (this_m_conn_data_listener == 0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = (P2 - 50) * (P2 / P2);
          this_m_accY = (P3 - 50) * (P3 / P3);
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_60"))
      {
        if (__logand(P1, __logor(__logand(P5, this_m_conn == 0), 0)))
        {
          method_id = 8;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = 1;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = 1;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_61"))
      {
        if (__logand(__logand(P1, __logor(__logand(P5, this_m_conn == 0), 0)), __logor(__logand(this_m_conn != 0, P5), 0)))
        {
          method_id = 8;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_62"))
      {
        if (__logand(!P1, __logor(__logand(!P6, this_m_conn == 0), 0)))
        {
          method_id = 9;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = 1;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_63"))
      {
        if (__logand(__logand(!P1, __logor(__logand(!P6, this_m_conn == 0), 0)), __logor(__logand(this_m_conn != 0, !P6), 0)))
        {
          method_id = 9;
          if (0)
          {
            goto ERROR;
          }

          q = 3;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      continue;
    }

    if (q == 4)
    {
      if (__VERIFIER_nondet_int("if_64"))
      {
        if (__logand(1, __logor(P1 != 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = 1;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_65"))
      {
        if (__logand(__logand(1, __logor(P1 != 0, 0)), __logor(P1 == 0, 0)))
        {
          method_id = 1;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_66"))
      {
        if (1)
        {
          method_id = 2;
          if (this_m_conn == 0)
          {
            goto ERROR;
          }

          q = 2;
          this_m_conn = 0;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = 0;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_67"))
      {
        if (1)
        {
          method_id = 3;
          if (this_m_delta == 0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_68"))
      {
        if (1)
        {
          method_id = 4;
          if (this_m_delta == 0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_69"))
      {
        if (1)
        {
          method_id = 6;
          if (this_m_conn == 0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_70"))
      {
        if (1)
        {
          method_id = 7;
          if (__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logor(__logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))), __logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))), __logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) >= P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand(((-P2) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) <= 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand(((-P2) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand(((-P2) - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand(((-P2) - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) <= 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand(((-P2) - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) <= 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand(((-P2) - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand((-1000) < P2, __logand(P2 < 0, this_m_conn_data_listener != 0))))))), __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), __logand(((-P3) - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))), __logand((P3 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 <= P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) <= 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) > 0, __logand((-1000) >= P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand(((-P3) - 50) <= 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand((P2 - 50) <= 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) <= 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand(((-P3) - 50) > 0, __logand((P2 - 50) > 0, __logand((-1000) < P3, __logand(P3 < 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P2 - 50) <= 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P2 - 50) > 0, __logand(1000 <= P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0)))))), __logand((P3 - 50) <= 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand((P2 - 50) <= 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) <= 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))), __logand((P3 - 50) > 0, __logand((P2 - 50) > 0, __logand(1000 > P3, __logand(P3 >= 0, __logand(1000 > P2, __logand(P2 >= 0, this_m_conn_data_listener != 0))))))))
          {
            goto ERROR;
          }

          q = 1;
          break;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_71"))
      {
        if (__logand(P1, __logor(__logand(P5, this_m_conn == 0), 0)))
        {
          method_id = 8;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = 1;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = 1;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_72"))
      {
        if (__logand(__logand(P1, __logor(__logand(P5, this_m_conn == 0), 0)), __logor(__logand(this_m_conn != 0, P5), 0)))
        {
          method_id = 8;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_73"))
      {
        if (__logand(!P1, __logor(__logand(!P6, this_m_conn == 0), 0)))
        {
          method_id = 9;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = 1;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
        }

        continue;
      }

      if (__VERIFIER_nondet_int("if_74"))
      {
        if (__logand(__logand(!P1, __logor(__logand(!P6, this_m_conn == 0), 0)), __logor(__logand(this_m_conn != 0, !P6), 0)))
        {
          method_id = 9;
          if (0)
          {
            goto ERROR;
          }

          q = 4;
          this_m_conn = this_m_conn;
          this_m_samples = this_m_samples;
          this_m_sensitivity = this_m_sensitivity;
          this_m_accX = this_m_accX;
          this_m_accY = this_m_accY;
          this_m_delta = this_m_delta;
          this_m_sensorInfo = this_m_sensorInfo;
          this_m_conn_data_listener = this_m_conn_data_listener;
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

