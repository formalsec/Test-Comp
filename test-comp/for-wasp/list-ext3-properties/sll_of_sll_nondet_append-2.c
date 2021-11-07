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

extern int __VERIFIER_nondet_int(char *);
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
  struct node *inner;
} *SLL;
void myexit(int s)
{
  _EXIT:
  goto _EXIT;

}

SLL sll_create(int len)
{
  SLL head = (void *) 0;
  while (len > 0)
  {
    SLL new_head = (SLL) malloc(sizeof(struct node));
    if (((void *) 0) == new_head)
    {
      myexit(1);
    }

    new_head->next = head;
    head = new_head;
    len--;
  }

  return head;
}

SLL node_create_with_sublist(int sublist_length)
{
  SLL new_node = (SLL) malloc(sizeof(struct node));
  if (((void *) 0) == new_node)
  {
    myexit(1);
  }

  new_node->inner = sll_create(sublist_length);
  new_node->next = (void *) 0;
  return new_node;
}

int sll_length(SLL head)
{
  int len = 0;
  while (head)
  {
    len++;
    head = head->next;
  }

  return len;
}

void sll_append(SLL *head, int sublist_length)
{
  SLL new_last = node_create_with_sublist(sublist_length);
  new_last->next = (void *) 0;
  SLL temp = *head;
  if (((void *) 0) != temp)
  {
    while (temp->next)
    {
      temp = temp->next;
    }

    temp->next = new_last;
  }
  else
  {
    *head = new_last;
  }

}

void sll_hierarchical_destroy(SLL head)
{
  while (head)
  {
    SLL temp = head->next;
    SLL sub_head = head->inner;
    while (sub_head)
    {
      SLL temp_2 = sub_head->next;
      free(sub_head);
      sub_head = temp_2;
    }

    free(head);
    head = temp;
  }

}

int main()
{
  const int min = 3;
  const int max = 5;
  int i;
  int j;
  SLL head = (void *) 0;
  for (i = min; i <= max; i++)
  {
    for (j = 0; __logand(j < 10, __VERIFIER_nondet_int("j")); j++)
    {
      sll_append(&head, i);
    }

  }

  sll_append(&head, min);
  SLL ptr = head;
  for (i = min; ((void *) 0) != ptr; i++)
  {
    if (i > max)
    {
      goto ERROR;
    }

    while (ptr)
    {
      int count = sll_length(ptr->inner);
      if (i == count)
      {
        ptr = ptr->next;
      }
      else
        if (__logand(3 == i, 5 == count))
      {
        i++;
        break;
      }
      else
        if (__logand((i + 1) == count, i < max))
      {
        break;
      }
      else
      {
        goto ERROR;
      }



    }

  }

  sll_hierarchical_destroy(head);
  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

