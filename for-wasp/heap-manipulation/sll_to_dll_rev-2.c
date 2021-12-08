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
  struct node *prev;
};
static struct node *alloc_node(void)
{
  struct node *ptr = malloc(sizeof(*ptr));
  if (!ptr)
    abort();

  ptr->next = (void *) 0;
  ptr->prev = (void *) 0;
  return ptr;
}

static void chain_node(struct node **ppnode)
{
  struct node *node = alloc_node();
  node->next = *ppnode;
  *ppnode = node;
}

static struct node *create_sll(const struct node **pp1, const struct node **pp2)
{
  struct node *list = (void *) 0;
  do
    chain_node(&list);
  while (__VERIFIER_nondet_int("while_1"));
  *pp2 = list;
  do
    chain_node(&list);
  while (__VERIFIER_nondet_int("while_2"));
  *pp1 = list;
  do
    chain_node(&list);
  while (__VERIFIER_nondet_int("while_3"));
  return list;
}

void init_back_link(struct node *list)
{
  for (;;)
  {
    struct node *next = list->next;
    if (!next)
      return;

    next->prev = list;
    list = next;
  }

}

void reverse_dll(struct node *list)
{
  while (list)
  {
    struct node *next = list->next;
    list->next = list->prev;
    list->prev = next;
    list = next;
  }

}

void remove_fw_link(struct node *list)
{
  while (list)
  {
    struct node *next = list->next;
    list->next = (void *) 0;
    list = next;
  }

}

void check_seq_next(const struct node *beg, const struct node * const end)
{
  do
  {
    if (!beg)
      fail();

  }
  while (0);
  do
  {
    if (!end)
      fail();

  }
  while (0);
  for (beg = beg->next; end != beg; beg = beg->next)
    do
  {
    if (!beg)
      fail();

  }
  while (0);

}

void check_seq_prev(const struct node *beg, const struct node * const end)
{
  do
  {
    if (!beg)
      fail();

  }
  while (0);
  do
  {
    if (!end)
      fail();

  }
  while (0);
  for (beg = beg->prev; end != beg; beg = beg->prev)
    do
  {
    if (!beg)
      fail();

  }
  while (0);

}

int main()
{
  const struct node *p1;
  const struct node *p2;
  struct node *list = create_sll(&p1, &p2);
  do
  {
  }
  while (0);
  check_seq_next(p1, p2);
  do
  {
    if (!(!p1->prev))
      fail();

  }
  while (0);
  do
  {
    if (!(!p2->prev))
      fail();

  }
  while (0);
  init_back_link(list);
  do
  {
  }
  while (0);
  check_seq_next(p1, p2);
  check_seq_prev(p2, p1);
  reverse_dll(list);
  do
  {
  }
  while (0);
  check_seq_prev(p1, p2);
  check_seq_next(p2, p1);
  remove_fw_link(list);
  do
  {
  }
  while (0);
  check_seq_prev(p1, p2);
  while (list)
  {
    struct node *prev = list->prev;
    free(list);
    list = prev;
  }

  return 0;
}

