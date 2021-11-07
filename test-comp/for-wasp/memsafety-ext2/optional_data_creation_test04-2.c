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
struct data_struct
{
  int number;
  int *array;
};
typedef struct data_struct *Data;
struct node_t
{
  Data data;
  struct node_t *next;
};
static Data create_data()
{
  if (__VERIFIER_nondet_int("if_1"))
  {
    return (void *) 0;
  }

  Data data = malloc(sizeof(*data));
  if (__VERIFIER_nondet_int("if_2"))
  {
    data->array = (int *) malloc(20 * (sizeof(data->array)));
    int counter = 0;
    for (counter = 0; counter < 20; counter++)
    {
      data->array[counter] = __VERIFIER_nondet_int("array[counter]");
    }

  }
  else
  {
    data->array = (void *) 0;
  }

  data->number = __VERIFIER_nondet_int("number");
  return data;
}

static void freeData(Data data)
{
  if (data == ((void *) 0))
  {
    return;
  }

  if (data->array != ((void *) 0))
  {
    free(data->array);
  }

  free(data);
}

static void append(struct node_t **pointerToList)
{
  struct node_t *node = malloc(sizeof(*node));
  node->next = *pointerToList;
  node->data = create_data();
  *pointerToList = node;
}

int main()
{
  struct node_t *list = (void *) 0;
  int dataNotFinished = 0;
  do
  {
    append(&list);
  }
  while (__VERIFIER_nondet_int("while_1"));
  while (list)
  {
    struct node_t *next = list->next;
    freeData(list->data);
    free(list);
    list = next;
  }

  return 0;
}

