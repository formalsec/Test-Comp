extern int __VERIFIER_nondet_int(char *);
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
struct process_node
{
  int process_id;
  int time_to_wait;
  struct process_node *next;
};
void run_process(int id)
{
  (void) id;
}

void append_to_queue(struct process_node *n, struct process_node **q)
{
  n->next = *q;
  *q = n;
}

struct process_node *choose_next(struct process_node **q)
{
  struct process_node *node = *q;
  struct process_node *prev = (void *) 0;
  struct process_node *result = (void *) 0;
  while (node != ((void *) 0))
  {
    if (node->time_to_wait == 1)
    {
      result = node;
      if (prev == ((void *) 0))
        *q = node->next;
      else
        prev->next = node->next;

    }
    else
    {
      node->time_to_wait--;
    }

    prev = node;
    node = node->next;
  }

  return result;
}

void check_queue(struct process_node *q)
{
  for (struct process_node *n = q; n != ((void *) 0); n = n->next)
    if (!(n->time_to_wait >= 1))
  {
    reach_error();
  }


}

int main()
{
  struct process_node *queue = (void *) 0;
  int next_time = 1;
  while (__VERIFIER_nondet_int("while_1"))
  {
    if (__logand(next_time < 1000, __VERIFIER_nondet_int("if_2")))
    {
      int new_id = __VERIFIER_nondet_int("new_id");
      struct process_node *new_process = malloc(sizeof(*new_process));
      new_process->process_id = __VERIFIER_nondet_int("process_id");
      new_process->time_to_wait = next_time++;
      append_to_queue(new_process, &queue);
    }
    else
      if (next_time > 1)
    {
      struct process_node *p = choose_next(&queue);
      next_time--;
      run_process(p->process_id);
    }


    check_queue(queue);
  }

}

