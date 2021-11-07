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
struct cell
{
  int data;
  struct cell *next;
};
struct cell *S;
int pc1 = 1;
int pc4 = 1;
void push()
{
  static struct cell *t1 = (void *) 0;
  static struct cell *x1 = (void *) 0;
  switch (pc1++)
  {
    case 1:
      x1 = malloc(sizeof(*x1));
      x1->data = 0;
      x1->next = (void *) 0;
      return;

    case 2:
      x1->data = 4;
      return;

    case 3:
      t1 = S;
      return;

    case 4:
      x1->next = t1;
      return;

    case 5:
      if (S == t1)
      S = x1;
    else
      pc1 = 3;

      return;

    case 6:
      pc1 = 1;
      return;

  }

}

struct cell *garbage;
void pop()
{
  static struct cell *t4 = (void *) 0;
  static struct cell *x4 = (void *) 0;
  static int res4;
  switch (pc4++)
  {
    case 1:
      t4 = S;
      return;

    case 2:
      if (t4 == ((void *) 0))
      pc4 = 1;

      return;

    case 3:
      x4 = t4->next;
      return;

    case 4:
      if (S == t4)
      S = x4;
    else
      pc4 = 1;

      return;

    case 5:
      res4 = t4->data;
      t4->next = garbage;
      garbage = t4;
      pc4 = 1;
      return;

  }

}

int main()
{
  while (__logor(__logor(__logor(S, 1 != pc1), 1 != pc4), __VERIFIER_nondet_int("while_1")))
  {
    if (__VERIFIER_nondet_int("if_1"))
      push();
    else
      pop();

  }

  while (garbage)
  {
    struct cell *next = garbage->next;
    free(garbage);
    garbage = next;
  }

  return !(!garbage);
}

