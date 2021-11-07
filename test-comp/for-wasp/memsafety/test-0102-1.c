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
struct list_head
{
  struct list_head *next;
  struct list_head *prev;
};
inline static void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next)
{
  next->prev = new;
  new->next = next;
  new->prev = prev;
  prev->next = new;
}

inline static void list_add_tail(struct list_head *new, struct list_head *head)
{
  __list_add(new, head->prev, head);
}

struct top_list
{
  struct list_head link;
  struct list_head sub1;
  struct list_head sub2;
};
struct sub_list
{
  int number;
  struct list_head link;
};
void destroy_sub(struct list_head *head)
{
  struct sub_list *now = (struct sub_list *) (((char *) head->next) - ((unsigned long) (&((struct sub_list *) 0)->link)));
  while ((&now->link) != head)
  {
    struct sub_list *next = (struct sub_list *) (((char *) now->link.next) - ((unsigned long) (&((struct sub_list *) 0)->link)));
    free(now);
    now = next;
  }

}

void destroy_top(struct list_head *head)
{
  struct top_list *now = (struct top_list *) (((char *) head->next) - ((unsigned long) (&((struct top_list *) 0)->link)));
  while ((&now->link) != head)
  {
    struct top_list *next = (struct top_list *) (((char *) now->link.next) - ((unsigned long) (&((struct top_list *) 0)->link)));
    destroy_sub(&now->sub1);
    destroy_sub(&now->sub2);
    free(now);
    now = next;
  }

}

void insert_sub(struct list_head *head)
{
  struct sub_list *sub = malloc(sizeof(*sub));
  if (!sub)
    abort();

  sub->number = 0;
  list_add_tail(&sub->link, head);
}

void create_sub_list(struct list_head *sub)
{
  sub->prev = sub;
  sub->next = sub;
  do
    insert_sub(sub);
  while (__VERIFIER_nondet_int("while_1"));
}

void insert_top(struct list_head *head)
{
  struct top_list *top = malloc(sizeof(*top));
  if (!top)
    abort();

  create_sub_list(&top->sub1);
  create_sub_list(&top->sub2);
  list_add_tail(&top->link, head);
}

void create_top(struct list_head *top)
{
  do
    insert_top(top);
  while (__VERIFIER_nondet_int("while_2"));
}

int main()
{
  struct list_head top = {&top, &top};
  create_top(&top);
  destroy_top(&top);
  return 0;
}

