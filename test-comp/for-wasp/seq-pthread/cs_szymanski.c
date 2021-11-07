extern int __VERIFIER_nondet_int(char *);
extern unsigned long __VERIFIER_nondet_ulong(char *);
extern unsigned char __VERIFIER_nondet_uchar(char *);
extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

extern void abort(void);
void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
void reach_error()
{
  assert(0);
}

typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed long int64_t;
typedef unsigned long uint64_t;
typedef signed long intmax_t;
typedef unsigned long uintmax_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef signed long ptrdiff_t;
typedef unsigned long size_t;
typedef int wchar_t;
typedef signed long ssize_t;
typedef signed long suseconds_t;
typedef signed long useconds_t;
typedef signed long long time_t;
typedef int32_t pid_t;
typedef uint32_t uid32_t;
typedef uint32_t gid32_t;
typedef int32_t clockid_t;
typedef int32_t timer_t;
typedef long int fpos_t;
typedef uint32_t socklen_t;
typedef uint16_t sa_family_t;
void abort(void);
void *alloca(size_t);
void *calloc(size_t, size_t);
void *malloc(size_t);
void free(void *);
void *realloc(void *, size_t);
char *getenv(const char *name);
int setenv(const char *name, const char *value, int overwrite);
int unsetenv(const char *name);
long int strtol(const char *nptr, char **endptr, int base);
unsigned long int strtoul(const char *nptr, char **endptr, int base);
void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
}

unsigned char __CS_round = 0;
unsigned char __CS_ret = 0;
const unsigned char __CS_ret_PREEMPTED = 0x01;
const unsigned char __CS_ret_ERROR = 0x02;
const unsigned char __CS_ret_FINISHED = 0x04;
unsigned char __CS_error = 0;
unsigned char __CS_thread_index;
unsigned char __CS_thread_allocated[2 + 1];
unsigned char __CS_thread_born_round[2 + 1];
void *(*__CS_thread[2 + 1])(void *);
unsigned char __CS_thread_status[3][2 + 1];
const unsigned char __THREAD_UNUSED = 0x00;
const unsigned char __THREAD_RUNNING = 0x01;
const unsigned char __THREAD_FINISHED = 0x02;
unsigned char *__CS_thread_lockedon[3][2 + 1];
int __VERIFIER_nondet_int(char *);
void __CS_cs(void)
{
  unsigned char k = __VERIFIER_nondet_uchar("k");
  assume_abort_if_not((__CS_round + k) < 3);
  __CS_round += k;
  __CS_ret = (__logand(__VERIFIER_nondet_int("1"), __CS_round == (3 - 1))) ? (__CS_ret_PREEMPTED) : (__CS_ret);
}

int __CS_pthread_mutex_init(unsigned char *mutex, void *attr)
{
  return 0;
}

int __CS_pthread_mutex_destroy(unsigned char *lock)
{
  if (__logand((*lock) != __CS_thread_index, (*lock) != 0))
  {
    __CS_error = 1;
    __CS_ret = __CS_ret_ERROR;
  }
  else
    *lock = 0;

  return 0;
}

int __CS_pthread_mutex_lock(unsigned char *lock)
{
  if ((*lock) == 0)
    *lock = __CS_thread_index + 1;
  else
  {
    __CS_ret = __CS_ret_PREEMPTED;
    return 1;
  }

  return 0;
}

int __CS_pthread_mutex_unlock(unsigned char *lock)
{
  if ((*lock) != (__CS_thread_index + 1))
  {
    __CS_error = 1;
    __CS_ret = __CS_ret_ERROR;
    return 1;
  }
  else
    *lock = 0;

  return 0;
}

int __CS_pthread_cond_init(unsigned char *cond, void *attr)
{
  return 0;
}

int __CS_pthread_cond_signal(unsigned char *cond)
{
  int j;
  for (j = 0; j <= 2; j++)
    if (__CS_thread_lockedon[__CS_round][j] == cond)
    __CS_thread_lockedon[__CS_round][j] = 0;


  return 0;
}

int __CS_pthread_cond_broadcast(unsigned char *cond)
{
  int j;
  for (j = 0; j <= 2; j++)
    if (__CS_thread_lockedon[__CS_round][j] == cond)
    __CS_thread_lockedon[__CS_round][j] = 0;


  return 0;
}

int __CS_pthread_cond_wait(unsigned char *cond, unsigned char *lock)
{
  if ((*lock) != (__CS_thread_index + 1))
  {
    __CS_error = 1;
    __CS_ret = __CS_ret_ERROR;
    return 1;
  }
  else
    *lock = 0;

  __CS_thread_lockedon[__CS_round][__CS_thread_index] = cond;
  __CS_ret = __CS_ret_PREEMPTED;
  if ((*lock) == 0)
    *lock = __CS_thread_index + 1;
  else
  {
    __CS_ret = __CS_ret_PREEMPTED;
    return 1;
  }

  return 0;
}

void __CS_assert(int expr)
{
  if (!expr)
  {
    __CS_error = 1;
    __CS_ret = __CS_ret_ERROR;
  }

}

void __CS_assume(int expr)
{
  if (!expr)
    __CS_ret = __CS_ret_PREEMPTED;

}

int __CS_pthread_join(unsigned char thread, void **value_ptr)
{
  if (__logand(thread != 123, thread > (2 + 1)))
  {
    __CS_error = 1;
    __CS_ret = __CS_ret_ERROR;
    return 0;
  }

  if (__logor(thread == 123, __CS_thread_status[__CS_round][thread] == __THREAD_RUNNING))
  {
    __CS_ret = __CS_ret_PREEMPTED;
    return 0;
  }

  if (__CS_thread_status[__CS_round][thread] == __THREAD_UNUSED)
  {
    __CS_error = 1;
    __CS_ret = __CS_ret_ERROR;
    return 0;
  }

  assume_abort_if_not(__CS_thread_status[__CS_round][thread] == __THREAD_FINISHED);
  return 0;
}

int __CS_pthread_create(unsigned char *id1, void *attr, void *(*t1)(void *), void *arg)
{
  if (__CS_thread_index == 2)
  {
    *id1 = 123;
    return -1;
  }

  __CS_thread_index++;
  __CS_thread_allocated[__CS_thread_index] = 1;
  __CS_thread_born_round[__CS_thread_index] = __CS_round;
  __CS_thread[__CS_thread_index] = t1;
  __CS_thread_status[__CS_round][__CS_thread_index] = __THREAD_RUNNING;
  *id1 = __CS_thread_index;
  return __CS_thread_index;
}

int flag1[3] = {0};
int flag2[3] = {0};
int x[3];
union __CS__u
{
  int flag1[3];
  int flag2[3];
  int x[3];
};
union __CS__u __CS_u;
void *thr1()
{
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  flag1[__CS_round] = 1;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  while (flag2[__CS_round] >= 3)
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    ;
  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  flag1[__CS_round] = 3;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  if (flag2[__CS_round] == 1)
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    flag1[__CS_round] = 2;
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    while (flag2[__CS_round] != 4)
    {
      __CS_cs();
      if (__CS_ret != 0)
        return 0;

      ;
    }

    __CS_cs();
    if (__CS_ret != 0)
      return 0;

  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  flag1[__CS_round] = 4;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  while (flag2[__CS_round] >= 2)
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    ;
  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  x[__CS_round] = 0;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  if (!(x[__CS_round] <= 0))
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    __CS_ERROR:
    __CS_error = 1;

    __CS_ret = __CS_ret_ERROR;
    return 0;
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    goto __CS_ERROR;
  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  ;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  while (__logand(2 <= flag2[__CS_round], flag2[__CS_round] <= 3))
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    ;
  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  flag1[__CS_round] = 0;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

}

void *thr2()
{
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  flag2[__CS_round] = 1;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  while (flag1[__CS_round] >= 3)
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    ;
  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  flag2[__CS_round] = 3;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  if (flag1[__CS_round] == 1)
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    flag2[__CS_round] = 2;
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    while (flag1[__CS_round] != 4)
    {
      __CS_cs();
      if (__CS_ret != 0)
        return 0;

      ;
    }

    __CS_cs();
    if (__CS_ret != 0)
      return 0;

  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  flag2[__CS_round] = 4;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  while (flag1[__CS_round] >= 2)
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    ;
  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  x[__CS_round] = 1;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  if (!(x[__CS_round] >= 1))
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    __CS_ERROR:
    __CS_error = 1;

    __CS_ret = __CS_ret_ERROR;
    return 0;
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    goto __CS_ERROR;
  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  ;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  while (__logand(2 <= flag1[__CS_round], flag1[__CS_round] <= 3))
  {
    __CS_cs();
    if (__CS_ret != 0)
      return 0;

    ;
  }

  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  flag2[__CS_round] = 0;
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

}

void *main_thread(void *arg)
{
  unsigned char t1 = __VERIFIER_nondet_uchar("t1");
  unsigned char t2 = __VERIFIER_nondet_uchar("t2");
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  __CS_pthread_create(&t1, 0, thr1, 0);
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  __CS_pthread_create(&t2, 0, thr2, 0);
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  __CS_pthread_join(t1, 0);
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

  __CS_pthread_join(t2, 0);
  __CS_cs();
  if (__CS_ret != 0)
    return 0;

}

int main()
{
  unsigned char __CS_cp___CS_thread_status[3][2 + 1];
  unsigned char *__CS_cp___CS_thread_lockedon[3][2 + 1];
  int __CS_cp_flag1[3];
  int __CS_cp_flag2[3];
  int __CS_cp_x[3];
  int i;
  int j;
  for (i = 0; i < 3; i++)
  {
    __CS_cp_flag1[i] = __VERIFIER_nondet_int("__CS_cp_flag1[i]");
    __CS_cp_flag2[i] = __VERIFIER_nondet_int("__CS_cp_flag2[i]");
    __CS_cp_x[i] = __VERIFIER_nondet_int("__CS_cp_x[i]");
    for (j = 0; j < 3; j++)
    {
      __CS_cp___CS_thread_status[i][j] = __VERIFIER_nondet_uchar("__CS_cp___CS_thread_status[i][j]");
      __CS_cp___CS_thread_lockedon[i][j] = (unsigned char *) ((void *) __VERIFIER_nondet_ulong("__CS_cp___CS_thread_lockedon[i][j]"));
    }

  }

  __CS_thread_status[1][0] = __CS_cp___CS_thread_status[1][0];
  __CS_thread_status[2][0] = __CS_cp___CS_thread_status[2][0];
  __CS_thread_status[1][1] = __CS_cp___CS_thread_status[1][1];
  __CS_thread_status[2][1] = __CS_cp___CS_thread_status[2][1];
  __CS_thread_status[1][2] = __CS_cp___CS_thread_status[1][2];
  __CS_thread_status[2][2] = __CS_cp___CS_thread_status[2][2];
  __CS_thread_lockedon[1][0] = __CS_cp___CS_thread_lockedon[1][0];
  __CS_thread_lockedon[2][0] = __CS_cp___CS_thread_lockedon[2][0];
  __CS_thread_lockedon[1][1] = __CS_cp___CS_thread_lockedon[1][1];
  __CS_thread_lockedon[2][1] = __CS_cp___CS_thread_lockedon[2][1];
  __CS_thread_lockedon[1][2] = __CS_cp___CS_thread_lockedon[1][2];
  __CS_thread_lockedon[2][2] = __CS_cp___CS_thread_lockedon[2][2];
  flag1[1] = __CS_cp_flag1[1];
  flag1[2] = __CS_cp_flag1[2];
  flag2[1] = __CS_cp_flag2[1];
  flag2[2] = __CS_cp_flag2[2];
  x[1] = __CS_cp_x[1];
  x[2] = __CS_cp_x[2];
  __CS_round = 0;
  __CS_thread_index = 0;
  __CS_thread_born_round[0] = __CS_round;
  __CS_thread_status[0][0] = __THREAD_RUNNING;
  __CS_thread[0] = main_thread;
  __CS_thread_allocated[0] = 1;
  if (__CS_thread_allocated[0] == 1)
  {
    __CS_round = __CS_thread_born_round[0];
    __CS_ret = 0;
    __CS_thread[0](0);
    if (__CS_ret != __CS_ret_PREEMPTED)
      __CS_thread_status[__CS_round][0] = __THREAD_FINISHED;

  }

  if (__CS_thread_allocated[1] == 1)
  {
    __CS_round = __CS_thread_born_round[1];
    __CS_ret = 0;
    __CS_thread[1](0);
    if (__CS_ret != __CS_ret_PREEMPTED)
      __CS_thread_status[__CS_round][1] = __THREAD_FINISHED;

  }

  if (__CS_thread_allocated[2] == 1)
  {
    __CS_round = __CS_thread_born_round[2];
    __CS_ret = 0;
    __CS_thread[2](0);
    if (__CS_ret != __CS_ret_PREEMPTED)
      __CS_thread_status[__CS_round][2] = __THREAD_FINISHED;

  }

  assume_abort_if_not(__CS_thread_status[0][0] == __CS_cp___CS_thread_status[1][0]);
  assume_abort_if_not(__CS_thread_status[1][0] == __CS_cp___CS_thread_status[2][0]);
  assume_abort_if_not(__CS_thread_status[0][1] == __CS_cp___CS_thread_status[1][1]);
  assume_abort_if_not(__CS_thread_status[1][1] == __CS_cp___CS_thread_status[2][1]);
  assume_abort_if_not(__CS_thread_status[0][2] == __CS_cp___CS_thread_status[1][2]);
  assume_abort_if_not(__CS_thread_status[1][2] == __CS_cp___CS_thread_status[2][2]);
  assume_abort_if_not(__CS_thread_lockedon[0][0] == __CS_cp___CS_thread_lockedon[1][0]);
  assume_abort_if_not(__CS_thread_lockedon[1][0] == __CS_cp___CS_thread_lockedon[2][0]);
  assume_abort_if_not(__CS_thread_lockedon[0][1] == __CS_cp___CS_thread_lockedon[1][1]);
  assume_abort_if_not(__CS_thread_lockedon[1][1] == __CS_cp___CS_thread_lockedon[2][1]);
  assume_abort_if_not(__CS_thread_lockedon[0][2] == __CS_cp___CS_thread_lockedon[1][2]);
  assume_abort_if_not(__CS_thread_lockedon[1][2] == __CS_cp___CS_thread_lockedon[2][2]);
  assume_abort_if_not(flag1[0] == __CS_cp_flag1[1]);
  assume_abort_if_not(flag1[1] == __CS_cp_flag1[2]);
  assume_abort_if_not(flag2[0] == __CS_cp_flag2[1]);
  assume_abort_if_not(flag2[1] == __CS_cp_flag2[2]);
  assume_abort_if_not(x[0] == __CS_cp_x[1]);
  assume_abort_if_not(x[1] == __CS_cp_x[2]);
  __VERIFIER_assert(__CS_error != 1);
}

