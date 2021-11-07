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
  SLL *x = head;
  while (__VERIFIER_nondet_int("while_1"))
  {
    x->next = malloc(sizeof(SLL));
    x = x->next;
    x->data = 0;
    x->next = (void *) 0;
  }

  if (__VERIFIER_nondet_int("if_1"))
  {
    x = malloc(sizeof(SLL));
    x->data = 1;
    x->next = head;
    head = x;
  }
  else
  {
    x = head;
    while (x->next)
    {
      if (__VERIFIER_nondet_int("if_2"))
        break;

      x = x->next;
    }

    SLL *y = x->next;
    x->next = malloc(sizeof(SLL));
    x->data = 1;
    x->next = y;
  }

  x = head;
  while (x->data != 1)
  {
    x = x->next;
  }

  x = x->next;
  while (x)
  {
    if (x->data == 1)
      do
    {
      if (!0)
      {
        reach_error();
        abort();
      }

    }
    while (0);

    x = x->next;
  }

  x = head;
  while (x != ((void *) 0))
  {
    head = x;
    x = x->next;
    free(head);
  }

  return 0;
}

