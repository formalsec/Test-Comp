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
struct sl_item
{
  struct sl_item *n1;
  struct sl_item *n2;
};
struct sl
{
  struct sl_item *head;
  struct sl_item *tail;
};
struct sl_item *alloc_or_die(void)
{
  struct sl_item *pi = malloc(sizeof(struct sl_item));
  return pi;
}

struct sl *create_sl_with_head_and_tail(void)
{
  struct sl *sl = malloc(sizeof(*sl));
  sl->head = malloc(sizeof(struct sl_item));
  sl->tail = malloc(sizeof(struct sl_item));
  sl->head->n2 = (sl->head->n1 = sl->tail);
  sl->tail->n2 = (sl->tail->n1 = (void *) 0);
  return sl;
}

void sl_random_insert(struct sl *sl)
{
  struct sl_item *a1;
  struct sl_item *a2;
  struct sl_item *new;
  a2 = sl->head;
  while (__logand(a2->n2 != sl->tail, __VERIFIER_nondet_int("while_1")))
    a2 = a2->n2;

  a1 = a2;
  while (__logand(a1->n1 != a2->n2, __VERIFIER_nondet_int("while_2")))
    a1 = a1->n1;

  new = malloc(sizeof(struct sl_item));
  new->n1 = a1->n1;
  a1->n1 = new;
  if (__VERIFIER_nondet_int("if_1"))
  {
    new->n2 = a2->n2;
    a2->n2 = new;
  }

}

void destroy_sl(struct sl *sl)
{
  struct sl_item *tmp;
  while (sl->head)
  {
    tmp = sl->head;
    sl->head = sl->head->n1;
    free(tmp);
  }

  free(sl);
}

int main()
{
  struct sl *sl = create_sl_with_head_and_tail();
  while (__VERIFIER_nondet_int("while_3"))
    sl_random_insert(sl);

  destroy_sl(sl);
  return 0;
}

