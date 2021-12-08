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
extern int __VERIFIER_nondet_int(char *);
extern void abort(void);
void reach_error()
{
  assert(0);
}

typedef struct TSLL
{
  struct TSLL *next;
  int data;
} SLL;
int main()
{
  SLL *head = malloc(sizeof(SLL));
  head->next = (void *) 0;
  head->data = 0;
  SLL *item = head;
  int status = 0;
  while (__VERIFIER_nondet_int("while_1"))
  {
    item->next = malloc(sizeof(SLL));
    item = item->next;
    item->next = (void *) 0;
    if (!status)
    {
      item->data = 1;
      status = 1;
    }
    else
      if (status == 1)
    {
      item->data = 2;
      status = 2;
    }
    else
      if (status >= 2)
    {
      item->data = 3;
      status = 3;
    }



    do
    {
      if (!(head != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(item != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
  }

  do
  {
    if (!(head != ((void *) 0)))
    {
      reach_error();
      abort();
    }

  }
  while (0);
  if (status == 1)
  {
    do
    {
      if (!(head != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(head->next != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
  }

  if (status == 2)
  {
    do
    {
      if (!(head != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(head->next != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(head->next->next != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
  }

  if (status == 3)
  {
    do
    {
      if (!(head != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(head->next != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(head->next->next != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(head->next->next->next != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(head->next->next->next->data == 3))
      {
        reach_error();
        abort();
      }

    }
    while (0);
  }

  item = head->next;
  while (__logand(item, __VERIFIER_nondet_int("while_2")))
  {
    do
    {
      if (!__logor(!status, item->data > 0))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    item = item->next;
  }

  while (head)
  {
    item = head;
    head = head->next;
    free(item);
  }

  return 0;
}

