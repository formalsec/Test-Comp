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
void myexit(int s)
{
  _EXIT:
  goto _EXIT;

}

typedef struct node
{
  int h;
  struct node *n;
} *List;
int main()
{
  struct TreeNode
  {
    struct TreeNode *left;
    struct TreeNode *right;
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

  n = (void *) 0;
  struct TreeNode *pred;
  while (root)
  {
    pred = (void *) 0;
    n = root;
    while (__logor(n->left, n->right))
    {
      pred = n;
      if (n->left)
        n = n->left;
      else
        n = n->right;

    }

    if (pred)
    {
      if (n == pred->left)
        pred->left = (void *) 0;
      else
        pred->right = (void *) 0;

    }
    else
      root = (void *) 0;

    free(n);
  }

  List a = (List) malloc(sizeof(struct node));
  if (a == 0)
    myexit(1);

  List t;
  List p = a;
  while (__VERIFIER_nondet_int("while_4"))
  {
    p->h = 1;
    t = (List) malloc(sizeof(struct node));
    if (t == 0)
      myexit(1);

    p->n = t;
    p = p->n;
  }

  while (__VERIFIER_nondet_int("while_5"))
  {
    p->h = 2;
    t = (List) malloc(sizeof(struct node));
    if (t == 0)
      myexit(1);

    p->n = t;
    p = p->n;
  }

  p->h = 3;
  p = a;
  while (p->h == 2)
    p = p->n;

  while (p->h == 1)
    p = p->n;

  if (p->h != 3)
    ERROR:
  {
    reach_error();
    abort();
  }


  return 0;
}

