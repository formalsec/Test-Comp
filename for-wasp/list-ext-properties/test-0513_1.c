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
struct DItem
{
  struct DItem *next;
  int value;
};
struct TLItem
{
  struct TLItem *next;
  struct DItem *data;
};
int main()
{
  struct TLItem *data = (void *) 0;
  struct DItem *item;
  struct DItem *item2;
  struct TLItem *lItem;
  int c1 = 0;
  while (__logand(c1 < 5, __VERIFIER_nondet_int("while_1")))
  {
    c1++;
    item = malloc(sizeof(*item));
    if (!item)
      abort();

    item->next = (void *) 0;
    if (c1 < 2)
      item->value = 2;

    if (c1 < 4)
      item->value = c1 + 2;

    if (c1 < 6)
      item->value = (2 * c1) + 4;

    lItem = malloc(sizeof(*lItem));
    if (data)
    {
      lItem->next = data->next;
      data->next = lItem;
    }
    else
    {
      lItem->next = lItem;
      data = lItem;
    }

    lItem->data = item;
    item = (void *) 0;
    lItem = (void *) 0;
  }

  if (!data)
    return 0;

  while (data->next != data)
  {
    item = data->data;
    item2 = data->next->data;
    lItem = data->next;
    data->next = lItem->next;
    free(lItem);
    struct DItem **dst = &data->data;
    while (__logand(item, item2))
    {
      if (item->value > item2->value)
      {
        *dst = item;
        item = item->next;
      }
      else
      {
        *dst = item2;
        item2 = item2->next;
      }

      dst = &(*dst)->next;
    }

    if (item)
    {
      *dst = item;
      item = (void *) 0;
    }
    else
      if (item2)
    {
      *dst = item2;
      item2 = (void *) 0;
    }


    dst = (void *) 0;
    data = data->next;
  }

  item = data->data;
  free(data);
  while (item)
  {
    item2 = item;
    item = item->next;
    if (__logand(item2->value > 1, item2->value < 15))
    {
      free(item2);
    }

  }

  return 0;
}

