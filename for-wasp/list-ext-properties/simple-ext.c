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

extern int __VERIFIER_nondet_int(char *);
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
void myexit(int s)
{
  _EXIT:
  goto _EXIT;

}

typedef struct node
{
  int h;
  struct node *n;
} *List;
int main()
{
  List a = (List) malloc(sizeof(struct node));
  if (a == 0)
    myexit(1);

  List t;
  List p = a;
  int i = 0;
  while (__logand(i < 30, __VERIFIER_nondet_int("while_1")))
  {
    p->h = i;
    t = (List) malloc(sizeof(struct node));
    if (t == 0)
      myexit(1);

    p->n = t;
    p = p->n;
    i++;
  }

  p->h = i;
  p->n = 0;
  p = a;
  i = 0;
  while (p != 0)
  {
    if (p->h != 1)
    {
      ERROR:
      {
        reach_error();
        abort();
      }

    }

    p = p->n;
    i++;
  }

  p = a;
  while (p != 0)
  {
    struct node *tmp = p->n;
    free(p);
    p = tmp;
  }

  return 0;
}

