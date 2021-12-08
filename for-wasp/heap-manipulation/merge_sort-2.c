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
static void fail(void)
{
  ERROR:
  {
    reach_error();
    abort();
  }

}

struct node
{
  struct node *next;
  int value;
};
struct list
{
  struct node *slist;
  struct list *next;
};
static void merge_single_node(struct node ***dst, struct node **data)
{
  struct node *node = *data;
  *data = node->next;
  node->next = (void *) 0;
  *(*dst) = node;
  *dst = &node->next;
}

static void merge_pair(struct node **dst, struct node *sub1, struct node *sub2)
{
  while (__logor(sub1, sub2))
  {
    if (__logor(!sub2, __logand(sub1, sub1->value < sub2->value)))
      merge_single_node(&dst, &sub1);
    else
      merge_single_node(&dst, &sub2);

  }

}

static struct list *seq_sort_core(struct list *data)
{
  struct list *dst = (void *) 0;
  while (data)
  {
    struct list *next = data->next;
    if (!next)
    {
      data->next = dst;
      dst = data;
      break;
    }

    merge_pair(&data->slist, data->slist, next->slist);
    data->next = dst;
    dst = data;
    data = next->next;
    free(next);
  }

  return dst;
}

static void inspect_before(struct list *shape)
{
  do
  {
    if (!shape)
      fail();

  }
  while (0);
  for (; shape->next; shape = shape->next)
  {
    do
    {
      if (!shape)
        fail();

    }
    while (0);
    do
    {
      if (!shape->next)
        fail();

    }
    while (0);
    do
    {
      if (!shape->slist)
        fail();

    }
    while (0);
    do
    {
      if (!(shape->slist->next == ((void *) 0)))
        fail();

    }
    while (0);
  }

  do
  {
    if (!shape)
      fail();

  }
  while (0);
  do
  {
    if (!(shape->next == ((void *) 0)))
      fail();

  }
  while (0);
  do
  {
    if (!shape->slist)
      fail();

  }
  while (0);
  do
  {
    if (!(shape->slist->next == ((void *) 0)))
      fail();

  }
  while (0);
}

static void inspect_after(struct list *shape)
{
  do
  {
    if (!shape)
      fail();

  }
  while (0);
  do
  {
    if (!(shape->next == ((void *) 0)))
      fail();

  }
  while (0);
  do
  {
    if (!(shape->slist != ((void *) 0)))
      fail();

  }
  while (0);
  struct node *pos;
  for (pos = shape->slist; pos->next; pos = pos->next)
    ;

  do
  {
    if (!(!pos->next))
      fail();

  }
  while (0);
}

int main()
{
  struct list *data = (void *) 0;
  while (__VERIFIER_nondet_int("while_1"))
  {
    struct node *node = malloc(sizeof(*node));
    if (!node)
      abort();

    node->next = (void *) 0;
    node->value = __VERIFIER_nondet_int("value");
    struct list *item = malloc(sizeof(*item));
    if (!item)
      abort();

    item->slist = node;
    item->next = data;
    data = item;
  }

  if (!data)
    return 0;

  inspect_before(data);
  while (data->next)
    data = seq_sort_core(data);

  inspect_after(data);
  struct node *node = data->slist;
  free(data);
  while (node)
  {
    struct node *snext = node->next;
    free(node);
    node = snext;
  }

  return 0;
}

