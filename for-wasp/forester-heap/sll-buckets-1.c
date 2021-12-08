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
typedef struct TBCK
{
  struct TBCK *next;
  SLL *list;
  int data;
} BCK;
int main()
{
  BCK *bucket = malloc(sizeof(BCK));
  bucket->data = 0;
  bucket->list = (void *) 0;
  bucket->next = malloc(sizeof(BCK));
  BCK *bcki = bucket->next;
  bcki->data = 1;
  bcki->list = (void *) 0;
  bcki->next = malloc(sizeof(BCK));
  bcki = bcki->next;
  bcki->data = 2;
  bcki->list = (void *) 0;
  bcki->next = (void *) 0;
  struct TSLL *item = (void *) 0;
  struct TSLL *itr = (void *) 0;
  while (__VERIFIER_nondet_int("while_1"))
  {
    item = malloc(sizeof(SLL));
    item->next = (void *) 0;
    if (__VERIFIER_nondet_int("if_1"))
      item->data = 0;
    else
      if (__VERIFIER_nondet_int("if_2"))
      item->data = 1;
    else
      item->data = 2;


    bcki = bucket;
    do
    {
      if (!(bcki != ((void *) 0)))
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
    while (bcki->data != item->data)
      bcki = bcki->next;

    do
    {
      if (!(bcki != ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    if (bcki->list == ((void *) 0))
      bcki->list = item;
    else
    {
      itr = bcki->list;
      while (itr->next != ((void *) 0))
        itr = itr->next;

      itr->next = item;
    }

  }

  bcki = bucket;
  while (bcki != ((void *) 0))
  {
    item = bcki->list;
    bcki->list = (void *) 0;
    while (item != ((void *) 0))
    {
      itr = item;
      item = item->next;
      do
      {
        if (!(itr->data == bcki->data))
        {
          reach_error();
          abort();
        }

      }
      while (0);
      free(itr);
    }

    do
    {
      if (!(item == ((void *) 0)))
      {
        reach_error();
        abort();
      }

    }
    while (0);
    bucket = bcki;
    bcki = bcki->next;
    free(bucket);
    bucket = (void *) 0;
  }

  return 0;
}

