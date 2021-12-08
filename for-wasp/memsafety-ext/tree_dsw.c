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
int main()
{
  struct TreeNode
  {
    struct TreeNode *left;
    struct TreeNode *right;
  };
  struct StackItem
  {
    struct StackItem *next;
    struct TreeNode *node;
  };
  struct TreeNode *root = malloc(sizeof(*root));
  struct TreeNode *n;
  root->left = (void *) 0;
  root->right = (void *) 0;
  while (__VERIFIER_nondet_int("while_1"))
  {
    n = root;
    while (__logand(n->left, n->right))
    {
      if (__VERIFIER_nondet_int("if_1"))
        n = n->left;
      else
        n = n->right;

    }

    if (__logand(!n->left, __VERIFIER_nondet_int("if_2")))
    {
      n->left = malloc(sizeof(*n));
      n->left->left = (void *) 0;
      n->left->right = (void *) 0;
    }

    if (__logand(!n->right, __VERIFIER_nondet_int("if_3")))
    {
      n->right = malloc(sizeof(*n));
      n->right->left = (void *) 0;
      n->right->right = (void *) 0;
    }

  }

  struct TreeNode sentinel;
  n = root;
  struct TreeNode *pred = &sentinel;
  struct TreeNode *succ = (void *) 0;
  while (n != (&sentinel))
  {
    succ = n->left;
    n->left = n->right;
    n->right = pred;
    pred = n;
    n = succ;
    if (!n)
    {
      n = pred;
      pred = (void *) 0;
    }

  }

  if (pred != root)
    ((struct TreeNode *) ((void *) 0))->left = (void *) 0;

  n = (void *) 0;
  struct StackItem *s = malloc(sizeof(*s));
  struct StackItem *st;
  s->next = (void *) 0;
  s->node = root;
  while (s != ((void *) 0))
  {
    st = s;
    s = s->next;
    n = st->node;
    free(st);
    if (n->left)
    {
      st = malloc(sizeof(*st));
      st->next = s;
      st->node = n->left;
      s = st;
    }

    if (n->right)
    {
      st = malloc(sizeof(*st));
      st->next = s;
      st->node = n->right;
      s = st;
    }

    free(n);
  }

  return 0;
}

