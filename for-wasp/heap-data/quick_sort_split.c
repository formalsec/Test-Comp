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
struct node
{
  int expected_list;
  int value;
  struct node *next;
};
void append_to_list(struct node **list, int val, int exp)
{
  struct node *node = malloc(sizeof(*node));
  node->next = *list;
  node->value = val;
  node->expected_list = exp;
  *list = node;
}

struct node *create_list()
{
  struct node *list = (void *) 0;
  while (__VERIFIER_nondet_int("while_1"))
  {
    int v = __VERIFIER_nondet_int("v");
    if (v < 0)
      append_to_list(&list, v, -1);
    else
      append_to_list(&list, v, 1);

  }

  return list;
}

int main()
{
  struct node *list = create_list();
  struct node *low = (void *) 0;
  struct node *high = (void *) 0;
  struct node *p = list;
  while (p)
  {
    struct node *l = (p->value >= 0) ? (high) : (low);
    struct node *next = p->next;
    p->next = l;
    l = p;
    p = next;
  }

  while (low)
  {
    if (!(low->expected_list == (-1)))
    {
      reach_error();
    }

    low = low->next;
  }

  while (high)
  {
    if (!(high->expected_list == 1))
    {
      reach_error();
    }

    high = high->next;
  }

}

