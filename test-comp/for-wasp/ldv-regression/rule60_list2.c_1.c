extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "rule60_list2.c_1.i", 3, "reach_error");
}

void __blast_assert()
{
  ERROR:
  {
    reach_error();
    abort();
  }

}

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
int __VERIFIER_nondet_int(char *);
void *guard_malloc_counter = 0;
void *__getMemory(int size)
{
  (size > 0) ? (0) : (__blast_assert());
  guard_malloc_counter++;
  if (!__VERIFIER_nondet_int("if_1"))
    return 0;

  return (void *) guard_malloc_counter;
}

void *my_malloc(int size)
{
  return __getMemory(size);
}

struct list_head
{
  struct list_head *prev;
  struct list_head *next;
};
struct list_head *elem = (void *) 0;
static void list_add(struct list_head *new, struct list_head *head)
{
  (new != elem) ? (0) : (__blast_assert());
  if (__VERIFIER_nondet_int("if_1"))
    elem = new;

}

static void list_del(struct list_head *entry)
{
  if (entry == elem)
    elem = (void *) 0;

}

static struct list_head head;
int main()
{
  struct list_head *dev1;
  struct list_head *dev2;
  dev1 = my_malloc(sizeof(*dev1));
  dev2 = my_malloc(sizeof(*dev2));
  if (__logand(dev1 != ((void *) 0), dev2 != ((void *) 0)))
  {
    list_add(dev2, &head);
    list_add(dev1, &head);
    list_del(dev2);
    list_add(dev2, &head);
    list_add(dev1, &head);
  }

  return 0;
}

