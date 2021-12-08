extern int __VERIFIER_nondet_int(char *);
int LOCK;
void lock(void)
{
  if (LOCK == 0)
  {
    LOCK = 1;
  }
  else
  {
  }

}

void unlock(void)
{
  if (LOCK == 1)
  {
    LOCK = 0;
  }
  else
  {
  }

}

int main()
{
  int got_lock;
  int old = 0;
  int new = 0;
  if (__VERIFIER_nondet_int("if_1"))
  {
    do
    {
      got_lock = 0;
      if (__VERIFIER_nondet_int("if_2"))
      {
        lock();
        got_lock++;
      }

      if (got_lock)
      {
        unlock();
      }

    }
    while (__VERIFIER_nondet_int("while_1"));
  }

  do
  {
    lock();
    old = new;
    if (__VERIFIER_nondet_int("if_3"))
    {
      unlock();
      new++;
    }

  }
  while (new != old);
  unlock();
  return 0;
}

