extern int __VERIFIER_nondet_int(char *);
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
typedef struct node
{
  struct node *next;
  int event1;
  int event2;
} Node;
int main()
{
  Node *l = (void *) 0;
  while (__VERIFIER_nondet_int("while_1"))
  {
    int ev1 = __VERIFIER_nondet_int("ev1");
    int ev2 = __VERIFIER_nondet_int("ev2");
    if (__logor(__logor(__logor(ev1 < 0, ev1 > 3), ev2 < 0), ev2 > 3))
      continue;

    if (__logor(__logor(__logand(ev1 == 0, ev2 == 2), __logand(ev1 == 1, ev2 == 3)), __logand(ev1 == 0, ev2 == 3)))
      continue;

    Node *p = malloc(sizeof(*p));
    p->event1 = ev1;
    p->event2 = ev2;
    {
      p->next = l;
      l = p;
    }
  }

  Node *i = l;
  while (i != ((void *) 0))
  {
    if (__logor(__logand(i->event1 == 1, i->event2 == 3), __logand(i->event1 == 0, i->event2 == 2)))
    {
      reach_error();
    }

    i = i->next;
  }

}

