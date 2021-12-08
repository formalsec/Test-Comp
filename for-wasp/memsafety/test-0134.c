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
inline static int list_empty(struct list_head *head)
{
  return head->next == head;
}

inline static void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next)
{
  next->prev = new;
  new->next = next;
  new->prev = prev;
  prev->next = new;
}

inline static void __list_del(struct list_head *prev, struct list_head *next)
{
  next->prev = prev;
  prev->next = next;
}

inline static void list_add(struct list_head *new, struct list_head *head)
{
  __list_add(new, head, head->next);
}

inline static void list_del(struct list_head *entry)
{
  __list_del(entry->prev, entry->next);
  entry->next = (void *) 0;
  entry->prev = (void *) 0;
}

inline static void list_move(struct list_head *list, struct list_head *head)
{
  __list_del(list->prev, list->next);
  list_add(list, head);
}

struct node
{
  int value;
  struct list_head linkage;
};
struct list_head gl_list = {&gl_list, &gl_list};
static void gl_insert(int value)
{
  struct node *node = malloc(sizeof(*node));
  if (!node)
    abort();

  node->value = value;
  list_add(&node->linkage, &gl_list);
}

static void gl_read()
{
  do
  {
    gl_insert(__VERIFIER_nondet_int("gl_insert_1"));
  }
  while (__VERIFIER_nondet_int("while_2"));
}

static void gl_destroy()
{
  struct list_head *next;
  while ((&gl_list) != (next = gl_list.next))
  {
    gl_list.next = next->next;
    free((struct node *) (((char *) next) - ((unsigned long) (&((struct node *) 0)->linkage))));
  }

}

static int val_from_node(struct list_head *head)
{
  struct node *entry = (struct node *) (((char *) head) - ((unsigned long) (&((struct node *) 0)->linkage)));
  return entry->value;
}

static struct list_head *gl_seek_max()
{
  if (list_empty(&gl_list))
    return (void *) 0;

  struct list_head *pos;
  struct list_head *max_pos = gl_list.next;
  int max = val_from_node(max_pos);
  for (pos = max_pos->next; (&gl_list) != pos; pos = pos->next)
  {
    const int value = val_from_node(pos);
    if (value < max)
      continue;

    max_pos = pos;
    max = value;
  }

  return max_pos;
}

static void gl_sort()
{
  if (list_empty(&gl_list))
    return;

  struct list_head dst = {&dst, &dst};
  struct list_head *max_pos;
  while (max_pos = gl_seek_max())
    list_move(max_pos, &dst);

  list_add(&gl_list, &dst);
  list_del(&dst);
}

int main()
{
  gl_read();
  gl_sort();
  gl_destroy();
  return 0;
}

