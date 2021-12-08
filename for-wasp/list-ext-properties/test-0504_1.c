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
struct T
{
  struct T *next;
  struct T *prev;
  int data;
};
struct T2
{
  struct T head;
  struct T2 *next;
  struct T2 *prev;
};
int main()
{
  struct T2 *first = (void *) 0;
  struct T2 *last = (void *) 0;
  int c1 = 0;
  int c2 = 0;
  while (__logand(c1 < 5, __VERIFIER_nondet_int("while_1")))
  {
    c1++;
    struct T2 *x = malloc(sizeof(struct T2));
    if (!x)
      abort();

    x->next = (void *) 0;
    x->prev = (void *) 0;
    x->head.next = &x->head;
    x->head.prev = &x->head;
    x->head.data = c1 * 2;
    struct T *y = (void *) 0;
    while (__logand(c2 < 3, __VERIFIER_nondet_int("while_2")))
    {
      c2++;
      y = malloc(sizeof(struct T));
      if (!y)
        abort();

      y->next = x->head.next;
      y->next->prev = y;
      y->prev = &x->head;
      y->data = c2 * c1;
      x->head.next = y;
      y = (void *) 0;
    }

    c2 = 0;
    if (!first)
    {
      first = x;
      last = x;
    }
    else
    {
      last->next = x;
      x->prev = last;
      last = x;
    }

  }

  while (c1 > 0)
  {
    c1--;
    struct T2 *x = first;
    first = first->next;
    struct T *y = x->head.next;
    while (y != (&x->head))
    {
      struct T *z = y;
      y = y->next;
      if (z->data < 16)
      {
        free(z);
      }

    }

    free(x);
  }

  return 0;
}

