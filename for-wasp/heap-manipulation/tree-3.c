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
static void fail(void)
{
  ERROR:
  {
    reach_error();
    abort();
  }

}

struct node
{
  struct node *left;
  struct node *right;
  struct node *parent;
  int value;
};
static void inspect(struct node *node)
{
  do
  {
    if (!node)
      fail();

  }
  while (0);
  while (node != ((void *) 0))
  {
    if (node->left)
      do
    {
      if (!(node->left->value == 42))
        fail();

    }
    while (0);

    do
    {
      if (!node->value)
        fail();

    }
    while (0);
    node = node->parent;
  }

}

struct node *create_tree()
{
  struct node *nodelast = (void *) 0;
  struct node *node = (void *) 0;
  while (__VERIFIER_nondet_int("while_1"))
  {
    node = malloc(sizeof(*node));
    if (!node)
      abort();

    node->left = (void *) 0;
    node->right = nodelast;
    if (nodelast)
      nodelast->parent = node;

    int value = __VERIFIER_nondet_int("value");
    if (!value)
      value = 1;

    node->value = value;
    nodelast = node;
  }

  if (node != ((void *) 0))
    node->parent = (void *) 0;

  while (node != ((void *) 0))
  {
    node->left = malloc(sizeof(*node));
    if (!node)
      abort();

    node->left->left = (void *) 0;
    node->left->right = (void *) 0;
    node->left->value = 42;
    node->left->parent = node;
    node = node->right;
  }

  return nodelast;
}

void free_tree(struct node *node)
{
  struct node *last = (void *) 0;
  while (1)
  {
    if (node->right == ((void *) 0))
      break;

    node = node->right;
  }

  while (node != ((void *) 0))
  {
    if (node->left)
      free(node->left);

    if (node->right)
      free(node->right);

    last = node;
    node = node->parent;
  }

  free(last);
}

int main()
{
  struct node *data = create_tree();
  if (!data)
    return 0;

  inspect(data);
  free_tree(data);
  return 0;
}

