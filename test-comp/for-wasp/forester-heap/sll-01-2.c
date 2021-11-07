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
  struct TSLL *inner;
} SLL;
int main()
{
  SLL *list = malloc(sizeof(SLL));
  list->next = (void *) 0;
  do
  {
    if (!(list != ((void *) 0)))
    {
      reach_error();
      abort();
    }

  }
  while (0);
  if (__VERIFIER_nondet_int("if_1"))
  {
    list->inner = (void *) 0;
  }
  else
  {
    list->inner = malloc(sizeof(SLL));
    list->inner->next = (void *) 0;
    list->inner->inner = (void *) 0;
  }

  do
  {
    if (!__logor(list->inner != ((void *) 0), list->inner == ((void *) 0)))
    {
      reach_error();
      abort();
    }

  }
  while (0);
  ;
  SLL *end = list;
  while (__VERIFIER_nondet_int("while_1"))
  {
    end->next = malloc(sizeof(SLL));
    end = end->next;
    end->next = (void *) 0;
    do
    {
      if (!(((void *) 0) != end))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(end != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    if (__VERIFIER_nondet_int("if_1"))
    {
      end->inner = (void *) 0;
    }
    else
    {
      end->inner = malloc(sizeof(SLL));
      end->inner->next = (void *) 0;
      end->inner->inner = (void *) 0;
    }

    do
    {
      if (!__logor(end->inner != ((void *) 0), end->inner == ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    ;
  }

  end = (void *) 0;
  end = list;
  do
  {
    if (!(((void *) 0) != end))
    {
      reach_error();
      abort();
    }

  }
  while (0);
  while (((void *) 0) != end)
  {
    int len = 0;
    SLL *inner = end->inner;
    while (((void *) 0) != inner)
    {
      if (len == 0)
        len = 1;
      else
        len = 2;

      do
      {
        if (!(((void *) 0) != inner))
        {
          reach_error();
          abort();
        }

      }
      while (0);
      do
      {
        if (!(((void *) 0) == inner->inner))
        {
          reach_error();
          abort();
        }

      }
      while (0);
      do
      {
        if (!(((void *) 0) == inner->next))
        {
          reach_error();
          abort();
        }

      }
      while (0);
      inner = inner->inner;
      if (len == 1)
        inner = inner->inner;

    }

    do
    {
      if (!(len <= 1))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    end = end->next;
  }

  while (((void *) 0) != list)
  {
    end = list->inner;
    if (((void *) 0) != end)
    {
      do
      {
        if (!(((void *) 0) != end))
        {
          reach_error();
          abort();
        }

      }
      while (0);
      do
      {
        if (!(((void *) 0) == end->inner))
        {
          reach_error();
          abort();
        }

      }
      while (0);
      do
      {
        if (!(((void *) 0) == end->next))
        {
          reach_error();
          abort();
        }

      }
      while (0);
      free(end);
      end = (void *) 0;
    }

    end = list->next;
    free(list);
    list = end;
  }

  return 0;
}

