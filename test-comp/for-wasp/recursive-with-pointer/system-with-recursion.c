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
typedef unsigned long long restr_t;
void summ_not_implemented_error(char *fname);
void summ_print_byte(char byte);
void *summ_maximize(void *sym_var, unsigned int length);
int summ_is_symbolic(void *sym_var, unsigned int length);
void *summ_new_sym_var(unsigned int length);
void summ_assume(restr_t restr);
void *_solver_Concat(void *sym_var, void *sym_var2, unsigned int length1, unsigned int length2);
void *_solver_Extract(void *sym_var, unsigned int start, unsigned int end, unsigned int length);
void *_solver_ZeroExt(void *sym_var, unsigned int to_extend, unsigned int length);
void *_solver_SignExt(void *sym_var, unsigned int to_extend, unsigned int length);
void summ_print_restriction(restr_t restr);
restr_t _solver_NOT(restr_t restr1);
restr_t _solver_Or(restr_t restr1, restr_t restr2);
restr_t _solver_And(restr_t restr1, restr_t restr2);
restr_t _solver_EQ(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_NEQ(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_LT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_LE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SLT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SLE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_IF(restr_t restr, void *sym_var, void *sym_var2, unsigned int length);
int _solver_is_it_possible(restr_t restr);
restr_t summ_true();
restr_t summ_false();
int _solver_must_be(restr_t restr);
int is_numeric(char c);
restr_t _solver_GE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_GT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SGE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SGT(void *sym_var, void *sym_var2, unsigned int length);
restr_t sym_is_numeric(void *var);
int pow(int x, unsigned n);
restr_t equal_rstr(char *s1, char *s2, int n);
int memcmp1(void *s1, void *s2, int n);
int memcmp2(void *s1, void *s2, int n);
int memcmp3(void *s1, void *s2, int n);
int memcmp4(void *s1, void *s2, int n);
void *memset1(void *str, int c, int n);
void *memcpy1(void *dest, void *src, int n);
void *memmove1(void *dest, void *src, int n);
void *memmove2(void *dest, void *src, int n);
char *memchr1(char *s, int c, int n);
char *memchr2(char *s, int c, int n);
char *memchr3(char *s, int c, int n);
char *memchr4(char *s, int c, int n);
char *strncpy1(char *dest, char *source, int n);
char *strncpy2(char *dest, char *source, int n);
int strlen1(char *s);
int strlen2(char *s);
int strlen3(char *s);
int strcmp1(char *s1, char *s2);
int strcmp2(char *s1, char *s2);
int strcmp3(char *s1, char *s2);
int strlen(char *s);
int strcmp(char *s1, char *s2);
char *strncpy(char *, char *, int);
int memcmp(void *s1, void *s2, int n);
void *memcpy(void *, void *, int);
void *memset(void *, int, int);
void *memmove(void *dest, void *src, int n);
char *memchr(char *s, int c, int n);
extern void abort(void);
void reach_error()
{
  assert(0);
}

typedef struct identify_s
{
  int id1;
  int id2;
  int id3;
  int id4;
} identify_t;
typedef unsigned int uint8;
typedef struct info_s
{
  int id;
  int is_valid;
  struct 
  {
    int n_ids;
    identify_t identify[4];
  } identifies;
} info_t;
typedef struct data_s
{
  int length;
  char value[20];
} data_t;
typedef enum message_type_s
{
  M_HELLO = 0,
  M_OPEN,
  M_CLOSE
} message_type_t;
typedef struct hello_s
{
  int index;
  unsigned int operations;
  data_t data;
} hello_t;
typedef struct open_s
{
  int index;
  int time;
  data_t data;
} open_t;
typedef struct close_s
{
  int index;
  int is_valid;
  data_t data;
} close_t;
typedef struct message_s
{
  int id;
  message_type_t type;
  union 
  {
    hello_t hello;
    open_t open;
    close_t close;
  } u;
} message_t;
typedef enum sys_state_s
{
  AS_INVALID = 0,
  AS_NULL,
  AS_START,
  AS_IDLE,
  AS_STOP,
  AS_STATE_MAX
} sys_state_t;
typedef enum e_primitive_s
{
  _EVENT_START = 0,
  _EVENT_HELLO,
  _EVENT_OPEN,
  _EVENT_CLOSE,
  _EVENT_MAX
} e_primitive_t;
typedef struct event_run_s
{
  int index;
} event_run_t;
typedef struct event_start_s
{
  int is_emergency;
} event_start_t;
typedef struct event_stop_s
{
  int switch_off;
  int type;
} event_stop_t;
typedef struct event_s
{
  e_primitive_t primitive;
  unsigned int userid;
  union 
  {
    event_start_t start;
    event_stop_t stop;
    event_run_t run;
  } u;
} event_t;
typedef struct user_s
{
  sys_state_t status;
  int user_id;
  int timeout;
  info_t *info;
  message_t message;
} user_t;
user_t *user;
int event_precess(event_t *e);
int message_send()
{
  message_t *message = &user->message;
  switch (message->type)
  {
    case M_HELLO:
      user->info->identifies.identify[0].id1 = message->u.hello.data.value[0];
      user->info->identifies.identify[0].id2 = message->u.hello.data.value[1];
      user->info->identifies.identify[0].id3 = message->u.hello.data.value[2];
      user->info->identifies.identify[0].id4 = message->u.hello.data.value[3];
      break;

    case M_OPEN:
      user->info->identifies.identify[1].id1 = message->u.hello.data.value[0];
      user->info->identifies.identify[1].id2 = message->u.hello.data.value[1];
      user->info->identifies.identify[1].id3 = message->u.hello.data.value[2];
      user->info->identifies.identify[1].id4 = message->u.hello.data.value[3];
      break;

    case M_CLOSE:
      user->info->identifies.identify[2].id1 = message->u.hello.data.value[0];
      user->info->identifies.identify[2].id2 = message->u.hello.data.value[1];
      user->info->identifies.identify[2].id3 = message->u.hello.data.value[2];
      user->info->identifies.identify[2].id4 = message->u.hello.data.value[3];
      break;

  }

  user->timeout--;
  if (user->timeout <= 0)
  {
    event_t e = {0};
    e.primitive = _EVENT_CLOSE;
    return event_precess(&e);
  }

  return 0;
}

void error()
{
}

int status_update(sys_state_t status)
{
  if (status < AS_STATE_MAX)
  {
    if (user->status != status)
    {
      user->status = status;
      return 10;
    }
    else
    {
      return 30;
    }

  }

  return 20;
}

int system_cleanup()
{
  memset(&user->message, 0, sizeof(message_t));
  return 0;
}

int system_initialize()
{
  event_t e = {0};
  if (!user->info->is_valid)
  {
    e.primitive = _EVENT_CLOSE;
  }
  else
  {
    e.primitive = _EVENT_OPEN;
  }

  return event_precess(&e);
}

int ASNull(event_t *e)
{
  e_primitive_t primitive = e->primitive;
  if (primitive == _EVENT_START)
  {
    status_update(AS_START);
    return system_initialize();
  }
  else
  {
    return -1;
  }

}

int ASStop(event_t *e)
{
  e_primitive_t primitive = e->primitive;
  switch (primitive)
  {
    case _EVENT_START:
      status_update(AS_START);
      return system_initialize();

    case _EVENT_CLOSE:
      system_cleanup();
      break;

    case _EVENT_OPEN:
      status_update(AS_START);
      return event_precess(e);

    default:
      break;

  }

  return 0;
}

void hello_message(hello_t *message)
{
  message->index = 2;
  message->operations = 2;
  message->data.length = 15;
  strncpy((char *) message->data.value, "Hello world", 15);
}

void open_message(open_t *message)
{
  message->index = 3;
  message->time = 2;
  message->data.length = 15;
  strncpy((char *) message->data.value, "Open System", message->data.length);
}

void close_message(close_t *message)
{
  message->index = 4;
  message->is_valid = 2;
  message->data.length = 15;
  strncpy((char *) message->data.value, "Hello world", message->data.length);
}

int ASStart(event_t *e)
{
  e_primitive_t primitive = e->primitive;
  int rc = -1;
  switch (primitive)
  {
    case _EVENT_OPEN:
    {
      message_t *message = &user->message;
      message = calloc(0, sizeof(*message));
      message->id = 4;
      message->type = M_OPEN;
      open_message(&message->u.open);
      rc = message_send();
      if (rc == 0)
      {
        status_update(AS_IDLE);
        e->primitive = _EVENT_HELLO;
      }

      rc = event_precess(e);
    }
      break;

    case _EVENT_CLOSE:
    {
      message_t *message = &user->message;
      message = calloc(0, sizeof(*message));
      message->id = 3;
      message->type = M_CLOSE;
      close_message(&message->u.close);
      rc = message_send();
      if (rc == 0)
      {
        status_update(AS_STOP);
        e->primitive = _EVENT_CLOSE;
      }

      rc = event_precess(e);
    }
      break;

    default:
      break;

  }

  return rc;
}

int ASIdle(event_t *e)
{
  e_primitive_t primitive = e->primitive;
  int rc = 0;
  switch (primitive)
  {
    case _EVENT_HELLO:
    {
      message_t *message = &user->message;
      message = calloc(0, sizeof(*message));
      message->id = 4;
      message->type = M_HELLO;
      hello_message(&message->u.hello);
      rc = message_send();
      rc = event_precess(e);
    }
      break;

    case _EVENT_OPEN:
      ERRORLABEL:
    {
      reach_error();
      abort();
    }

      status_update(AS_START);
      rc = event_precess(e);
      break;

    case _EVENT_CLOSE:
      status_update(AS_STOP);
      rc = event_precess(e);
      break;

    default:
      break;

  }

  return rc;
}

int event_precess(event_t *e)
{
  sys_state_t status = user->status;
  int rc = -1;
  if (status < AS_STATE_MAX)
    switch (status)
  {
    case AS_NULL:
      rc = ASNull(e);
      break;

    case AS_START:
      rc = ASStart(e);
      break;

    case AS_IDLE:
      rc = ASIdle(e);
      break;

    case AS_STOP:
      rc = ASStop(e);
      break;

    default:
      rc = -1;
      break;

  }


  return rc;
}

void user_initialize()
{
  user->info = calloc(1, sizeof(info_t));
  user->message.id = 11;
  user->info->is_valid = 0;
  user->status = AS_NULL;
  user->user_id = 11;
  user->timeout = 3;
}

int main()
{
  user = malloc(sizeof(user_t));
  user_initialize();
  event_t e = {0};
  e.primitive = _EVENT_START;
  event_precess(&e);
  return 0;
}

