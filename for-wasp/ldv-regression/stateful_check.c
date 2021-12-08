extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "stateful_check.c", 3, "reach_error");
}

void __blast_assert(void)
{
  ERROR:
  {
    reach_error();
    abort();
  }

}

int ldv_mutex = 1;
int open_called = 0;
extern int __VERIFIER_nondet_int(char *);
void mutex_lock(void)
{
  (ldv_mutex == 1) ? (0) : (__blast_assert());
  ldv_mutex = 2;
}

void mutex_unlock(void)
{
  (ldv_mutex == 2) ? (0) : (__blast_assert());
  ldv_mutex = 1;
}

void check_final_state(void)
{
  (ldv_mutex == 1) ? (0) : (__blast_assert());
}

static int misc_release()
{
  if (open_called)
  {
    mutex_lock();
    mutex_unlock();
    open_called = 0;
  }
  else
  {
    mutex_lock();
    mutex_lock();
  }

  return 0;
}

static int misc_llseek()
{
  return 0;
}

static int misc_read()
{
  return 0;
}

static int misc_open()
{
  if (__VERIFIER_nondet_int("if_1"))
  {
    return 1;
  }
  else
  {
    open_called = 1;
    return 0;
  }

}

static int my_init(void)
{
  open_called = 0;
  return 0;
}

int main(void)
{
  int ldv_s_misc_fops_file_operations = 0;
  my_init();
  while (__VERIFIER_nondet_int("while_1"))
  {
    switch (__VERIFIER_nondet_int("switch_2"))
    {
      case 0:
      {
        if (ldv_s_misc_fops_file_operations == 0)
        {
          misc_open();
          ldv_s_misc_fops_file_operations++;
        }

      }
        break;

      case 1:
      {
        if (ldv_s_misc_fops_file_operations == 1)
        {
          misc_read();
          ldv_s_misc_fops_file_operations++;
        }

      }
        break;

      case 2:
      {
        if (ldv_s_misc_fops_file_operations == 2)
        {
          misc_llseek();
          ldv_s_misc_fops_file_operations++;
        }

      }
        break;

      case 3:
      {
        if (ldv_s_misc_fops_file_operations == 3)
        {
          misc_release();
          ldv_s_misc_fops_file_operations = 0;
        }

      }
        break;

      default:
        break;

    }

  }

  check_final_state();
  return 0;
}

