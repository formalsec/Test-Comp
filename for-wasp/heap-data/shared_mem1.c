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
struct mem
{
  int val;
};
struct list_node
{
  int x;
  struct mem *mem;
  struct list_node *next;
};
int main()
{
  struct mem *m = malloc(sizeof(*m));
  m->val = 100;
  struct list_node *head = malloc(sizeof(*head));
  head->x = 1;
  head->mem = m;
  head->next = head;
  struct list_node *list = head;
  while (__VERIFIER_nondet_int("while_1"))
  {
    int x = __VERIFIER_nondet_int("x");
    if (__logand(x > 0, x < 10))
    {
      struct list_node *n = malloc(sizeof(*n));
      n->x = x;
      n->mem = m;
      n->next = head;
      list->next = n;
    }

  }

  list = head;
  while (list)
  {
    if (list->mem->val <= 100)
      list->mem->val += list->x;
    else
      list->mem->val -= list->x;

    list = list->next;
    if (!__logand(m->val > 90, m->val < 110))
    {
      reach_error();
    }

  }

}

