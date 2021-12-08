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
typedef struct node
{
  struct node *next;
  int data;
} *SLL;
void myexit(int s)
{
  _EXIT:
  goto _EXIT;

}

SLL node_create(int data)
{
  SLL temp = (SLL) malloc(sizeof(struct node));
  if (((void *) 0) == temp)
  {
    myexit(1);
  }

  temp->next = (void *) 0;
  temp->data = data;
  return temp;
}

SLL sll_circular_create(int len, int data)
{
  SLL head = node_create(data);
  SLL last = head;
  while (len > 1)
  {
    SLL new_head = node_create(data);
    new_head->next = head;
    head = new_head;
    len--;
  }

  last->next = head;
  return head;
}

void sll_circular_destroy(SLL head)
{
  if (((void *) 0) != head)
  {
    SLL p = head->next;
    while (p != head)
    {
      SLL q = p->next;
      free(p);
      p = q;
    }

    free(head);
  }

}

int sll_circular_get_data_at(SLL head, int index)
{
  while (index > 0)
  {
    head = head->next;
    index--;
  }

  return head->data;
}

void sll_circular_update_at(SLL head, int data, int index)
{
  while (index > 0)
  {
    head = head->next;
    index--;
  }

  head->data = data;
}

int main()
{
  const int len = 2;
  const int data = 1;
  SLL s = sll_circular_create(len, data);
  int i = 0;
  for (i = 0; i < len; i++)
  {
    int new_data = i + len;
    sll_circular_update_at(s, new_data, i);
  }

  for (i = 0; i < len; i++)
  {
    int expected = i + len;
    if (expected != sll_circular_get_data_at(s, i))
    {
      goto ERROR;
    }

  }

  sll_circular_destroy(s);
  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

