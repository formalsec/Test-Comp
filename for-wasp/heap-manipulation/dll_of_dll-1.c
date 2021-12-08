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
extern int __VERIFIER_nondet_int(char *);
static void fail(void)
{
  ERROR:
  {
    reach_error();
    abort();
  }

}

struct slave_item
{
  struct slave_item *next;
  struct slave_item *prev;
};
struct slave_item *alloc_or_die_slave(void)
{
  struct slave_item *ptr = malloc(sizeof(*ptr));
  if (!ptr)
    abort();

  ptr->next = (void *) 0;
  ptr->prev = (void *) 0;
  return ptr;
}

struct master_item
{
  struct master_item *next;
  struct master_item *prev;
  struct slave_item *slave;
};
struct master_item *alloc_or_die_master(void)
{
  struct master_item *ptr = malloc(sizeof(*ptr));
  if (!ptr)
    abort();

  ptr->next = (void *) 0;
  ptr->prev = (void *) 0;
  ptr->slave = (void *) 0;
  return ptr;
}

void dll_insert_slave(void **dll)
{
  struct slave_item *item = alloc_or_die_slave();
  struct slave_item *next = *dll;
  item->next = next;
  if (next)
    next->prev = item;

  *dll = item;
}

void *dll_create_generic(void (*insert_fnc)(void **))
{
  void *dll = (void *) 0;
  insert_fnc(&dll);
  insert_fnc(&dll);
  while (__VERIFIER_nondet_int("while_1"))
    insert_fnc(&dll);

  return dll;
}

struct slave_item *dll_create_slave(void)
{
  return dll_create_generic(dll_insert_slave);
}

void dll_destroy_slave(struct slave_item *dll)
{
  while (dll)
  {
    struct slave_item *next = dll->next;
    free(dll);
    dll = next;
  }

}

void dll_destroy_nested_lists(struct master_item *dll)
{
  while (dll)
  {
    dll_destroy_slave(dll->slave);
    dll = dll->next;
  }

}

void dll_reinit_nested_lists(struct master_item *dll)
{
  while (dll)
  {
    dll->slave = (void *) 0;
    dll = dll->next;
  }

}

void dll_destroy_master(struct master_item *dll)
{
  while (dll)
  {
    struct master_item *next = dll->next;
    free(dll);
    dll = next;
  }

}

void dll_insert_master(void **dll)
{
  struct master_item *item = alloc_or_die_master();
  struct master_item *next = *dll;
  item->next = next;
  if (next)
    next->prev = item;

  item->slave = dll_create_slave();
  *dll = item;
}

struct master_item *dll_create_master(void)
{
  return dll_create_generic(dll_insert_master);
}

void inspect_base(struct master_item *dll)
{
  do
  {
    if (!dll)
      fail();

  }
  while (0);
  do
  {
    if (!dll->next)
      fail();

  }
  while (0);
  do
  {
    if (!(!dll->prev))
      fail();

  }
  while (0);
  for (dll = dll->next; dll; dll = dll->next)
  {
    do
    {
      if (!dll->prev)
        fail();

    }
    while (0);
    do
    {
      if (!dll->prev->next)
        fail();

    }
    while (0);
    do
    {
      if (!(dll->prev->next == dll))
        fail();

    }
    while (0);
  }

}

void inspect_full(struct master_item *dll)
{
  inspect_base(dll);
  for (; dll; dll = dll->next)
  {
    struct slave_item *pos = dll->slave;
    do
    {
      if (!pos)
        fail();

    }
    while (0);
    do
    {
      if (!pos->next)
        fail();

    }
    while (0);
    do
    {
      if (!(!pos->prev))
        fail();

    }
    while (0);
    for (pos = pos->next; pos; pos = pos->next)
    {
      do
      {
        if (!pos->prev)
          fail();

      }
      while (0);
      do
      {
        if (!pos->prev->next)
          fail();

      }
      while (0);
      do
      {
        if (!(pos->prev->next == pos))
          fail();

      }
      while (0);
    }

  }

}

void inspect_dangling(struct master_item *dll)
{
  inspect_base(dll);
  for (; dll; dll = dll->next)
    do
  {
    if (!dll->slave)
      fail();

  }
  while (0);

}

void inspect_init(struct master_item *dll)
{
  inspect_base(dll);
  for (; dll; dll = dll->next)
    do
  {
    if (!(!dll->slave))
      fail();

  }
  while (0);

}

int main()
{
  struct master_item *dll = dll_create_master();
  inspect_full(dll);
  dll_destroy_nested_lists(dll);
  inspect_dangling(dll);
  dll_reinit_nested_lists(dll);
  inspect_init(dll);
  dll_destroy_master(dll);
  return 0;
}

