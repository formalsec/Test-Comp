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
  struct node *prev;
  int data;
} *DLL;
void myexit(int s)
{
  _EXIT:
  goto _EXIT;

}

DLL node_create(int data)
{
  DLL temp = (DLL) malloc(sizeof(struct node));
  if (((void *) 0) == temp)
  {
    myexit(1);
  }

  temp->next = (void *) 0;
  temp->prev = (void *) 0;
  temp->data = data;
  return temp;
}

DLL dll_circular_create(int len, int data)
{
  DLL head = node_create(data);
  DLL last = head;
  while (len > 1)
  {
    DLL new_head = node_create(data);
    new_head->next = head;
    if (head)
    {
      head->prev = new_head;
    }

    head = new_head;
    len--;
  }

  last->next = head;
  head->prev = last;
  return head;
}

void dll_circular_destroy(DLL head)
{
  if (((void *) 0) != head)
  {
    DLL p = head->next;
    while (p != head)
    {
      DLL q = p->next;
      free(p);
      p = q;
    }

    free(head);
  }

}

void dll_circular_prepend(DLL *head, int data)
{
  DLL new_head = node_create(data);
  if (((void *) 0) == (*head))
  {
    *head = new_head;
    new_head->next = new_head;
    new_head->prev = new_head;
  }
  else
  {
    DLL last = (*head)->prev;
    DLL old_head = *head;
    *head = new_head;
    new_head->next = old_head;
    old_head->prev = new_head;
    last->next = new_head;
    new_head->prev = last;
  }

}

int main(void)
{
  const int len = 2;
  const int data = 1;
  DLL s = dll_circular_create(len, data);
  dll_circular_prepend(&s, data);
  DLL ptr = s;
  int count = 0;
  do
  {
    if (data != ptr->data)
    {
      goto ERROR;
    }

    ptr = ptr->next;
    count++;
  }
  while (ptr != s);
  if (count != (1 + len))
  {
    goto ERROR;
  }

  dll_circular_destroy(s);
  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

