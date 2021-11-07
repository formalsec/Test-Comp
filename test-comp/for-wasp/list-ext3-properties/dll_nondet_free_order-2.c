extern int __VERIFIER_nondet_int(char *);
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
} *DLL;
void myexit(int s)
{
  _EXIT:
  goto _EXIT;

}

DLL dll_circular_create(int len)
{
  DLL last = (DLL) malloc(sizeof(struct node));
  if (((void *) 0) == last)
  {
    myexit(1);
  }

  last->next = last;
  last->prev = last;
  DLL head = last;
  while (len > 1)
  {
    DLL new_head = (DLL) malloc(sizeof(struct node));
    if (((void *) 0) == new_head)
    {
      myexit(1);
    }

    new_head->next = head;
    head->prev = new_head;
    head = new_head;
    len--;
  }

  last->next = head;
  head->prev = last;
  return head;
}

void _destroy_in_nondeterministic_order(DLL head)
{
  DLL pred = head->prev;
  DLL succ = head->next;
  if (__VERIFIER_nondet_int("if_1"))
  {
    free(head);
    if (__VERIFIER_nondet_int("if_2"))
    {
      free(succ);
      free(pred);
    }
    else
    {
      free(pred);
      free(succ);
    }

  }
  else
    if (__VERIFIER_nondet_int("if_3"))
  {
    free(succ);
    if (__VERIFIER_nondet_int("if_4"))
    {
      free(head);
      free(pred);
    }
    else
    {
      free(pred);
      free(head);
    }

  }
  else
  {
    free(pred);
    if (__VERIFIER_nondet_int("if_5"))
    {
      free(head);
      free(succ);
    }
    else
    {
      free(head);
    }

  }


}

int main()
{
  const int len = 3;
  DLL head = dll_circular_create(len);
  _destroy_in_nondeterministic_order(head);
  head = (void *) 0;
  return 0;
}

