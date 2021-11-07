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
struct node
{
  int value;
  struct node *next;
};
struct list
{
  struct node *slist;
  struct list *next;
};
struct iterator
{
  struct list *list;
  struct node *node;
};
int main()
{
  struct list *data = (void *) 0;
  {
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

  }
  {
    struct iterator iter;
    {
      struct list *list = data;
      if (iter.list = list)
        iter.node = list->slist;

    }
    struct node *node;
    {
      if (!iter.list)
        node = (void *) 0;
      else
      {
        struct node *current = iter.node;
        if (iter.node = current->next)
          node = current;
        else
        {
          if (iter.list = iter.list->next)
            iter.node = iter.list->slist;

          node = current;
        }

      }

    }
    while (node)
    {
      {
        if (!iter.list)
          node = (void *) 0;
        else
        {
          struct node *current = iter.node;
          if (iter.node = current->next)
            node = current;
          else
          {
            if (iter.list = iter.list->next)
              iter.node = iter.list->slist;

            node = current;
          }

        }

      }
    }

  }
  {
    struct list *list = data;
    while (__logand(list, list->next))
    {
      struct list *dst = (void *) 0;
      while (list)
      {
        struct list *next = list->next;
        if (!next)
        {
          list->next = dst;
          dst = list;
          break;
        }

        {
          struct node **dst = &list->slist;
          struct node *sub1 = list->slist;
          struct node *sub2 = next->slist;
          while (__logor(sub1, sub2))
          {
            struct node ***pdst = &dst;
            struct node **pdata;
            if (__logor(!sub2, __logand(sub1, __VERIFIER_nondet_int("if@158"))))
              pdata = &sub1;
            else
              pdata = &sub2;

            struct node *node = *pdata;
            *pdata = node->next;
            node->next = (void *) 0;
            *(*pdst) = node;
            *pdst = &node->next;
          }

        }
        list->next = dst;
        dst = list;
        list = next->next;
        free(next);
      }

      list = dst;
    }

    data = list;
  }
  {
    struct iterator iter;
    {
      struct list *list = data;
      if (iter.list = list)
        iter.node = list->slist;

    }
    struct node *node;
    {
      if (!iter.list)
        node = (void *) 0;
      else
      {
        struct node *current = iter.node;
        if (iter.node = current->next)
          node = current;
        else
        {
          if (iter.list = iter.list->next)
            iter.node = iter.list->slist;

          node = current;
        }

      }

    }
    while (node)
    {
      {
        if (!iter.list)
          node = (void *) 0;
        else
        {
          struct node *current = iter.node;
          if (iter.node = current->next)
            node = current;
          else
          {
            if (iter.list = iter.list->next)
              iter.node = iter.list->slist;

            node = current;
          }

        }

      }
    }

  }
  {
    while (data)
    {
      struct list *next = data->next;
      struct node *node = data->slist;
      while (node)
      {
        struct node *snext = node->next;
        free(node);
        node = snext;
      }

      free(data);
      data = next;
    }

  }
  return 0;
}

