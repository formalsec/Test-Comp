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

typedef enum 
{
  RED,
  BLACK
} Colour;
struct TSLL
{
  struct TSLL *next;
  struct TSLL *prev;
  Colour colour;
};
int main()
{
  struct TSLL *null = malloc(sizeof(struct TSLL));
  null->next = (void *) 0;
  null->prev = (void *) 0;
  null->colour = BLACK;
  struct TSLL *list = malloc(sizeof(struct TSLL));
  list->next = null;
  list->prev = null;
  list->colour = BLACK;
  struct TSLL *end = list;
  while (__VERIFIER_nondet_int("while_1"))
  {
    end->next = malloc(sizeof(struct TSLL));
    end->next->prev = end;
    end = end->next;
    end->next = null;
    if (__VERIFIER_nondet_int("if_1"))
    {
      end->colour = BLACK;
    }
    else
    {
      end->colour = RED;
      end->next = malloc(sizeof(struct TSLL));
      end->next->prev = end;
      end = end->next;
      end->next = null;
      end->colour = BLACK;
    }

    do
    {
      if (!(BLACK == end->colour))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(null == end->next))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    do
    {
      if (!(null != end))
      {
        reach_error();
        abort();
      }

    }
    while (0);
  }

  end = null;
  end = list;
  do
  {
    if (!(null != end))
    {
      reach_error();
      abort();
    }

  }
  while (0);
  do
  {
    if (!(BLACK == end->colour))
    {
      reach_error();
      abort();
    }

  }
  while (0);
  while (null != end)
  {
    if (RED == end->colour)
    {
      end = end->next;
      do
      {
        if (!(null != end))
        {
          reach_error();
          abort();
        }

      }
      while (0);
      do
      {
        if (!(BLACK == end->colour))
        {
          reach_error();
          abort();
        }

      }
      while (0);
    }

    end = end->next;
  }

  while (null != list)
  {
    if (RED == list->colour)
    {
      end = list->next;
      free(list);
      list = end->next;
      free(end);
    }
    else
    {
      end = list->next;
      free(list);
      list = end;
    }

  }

  free(null);
  return 0;
}

