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
} *SLL;
void myexit(int s)
{
  _EXIT:
  goto _EXIT;

}

SLL sll_create(int len)
{
  SLL head = (void *) 0;
  while ((len--) > 0)
  {
    SLL new_head = (SLL) malloc(sizeof(struct node));
    if (((void *) 0) == new_head)
    {
      myexit(1);
    }

    new_head->next = head;
    head = new_head;
  }

  return head;
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

void sll_destroy(SLL head)
{
  while (head)
  {
    SLL temp = head->next;
    free(head);
    head = temp;
  }

}

void sll_insert(SLL *head, int position)
{
  SLL new_node = (SLL) malloc(sizeof(struct node));
  if (((void *) 0) == new_node)
  {
    myexit(1);
  }

  SLL second_to_last = (void *) 0;
  SLL last = *head;
  while ((position--) > 0)
  {
    second_to_last = last;
    last = last->next;
  }

  new_node->next = last;
  if (second_to_last)
  {
    second_to_last->next = new_node;
  }
  else
  {
    *head = new_node;
  }

}

int _get_nondet_int(int from, int until)
{
  int len = from;
  while (__logand(len < until, __VERIFIER_nondet_int("while_1")))
  {
    len++;
  }

  return len;
}

int main()
{
  const int len = _get_nondet_int(2, 5);
  SLL s = sll_create(len);
  const int k = _get_nondet_int(0, len - 1);
  int i = 0;
  while (__logand(i < k, __VERIFIER_nondet_int("while_2")))
  {
    int position = _get_nondet_int(0, i + (len - 1));
    sll_insert(&s, position);
    i++;
  }

  if ((k + len) != sll_length(s))
  {
    goto ERROR;
  }

  sll_destroy(s);
  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

