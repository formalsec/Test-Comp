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
typedef struct TListNode
{
  struct TListNode *next;
} ListNode;
typedef struct TTreeNode
{
  struct TTreeNode *left;
  struct TTreeNode *right;
  ListNode *list;
} TreeNode;
int main()
{
  TreeNode *tree = malloc(sizeof(*tree));
  TreeNode *tmp;
  ListNode *tmpList;
  tree->left = (void *) 0;
  tree->right = (void *) 0;
  tree->list = malloc(sizeof(ListNode));
  tree->list->next = tree->list;
  while (__VERIFIER_nondet_int("while_1"))
  {
    tmpList = malloc(sizeof(ListNode));
    tmpList->next = tree->list->next;
    tree->list->next = tmpList;
  }

  while (__VERIFIER_nondet_int("while_2"))
  {
    tmp = tree;
    while (__logand(((void *) 0) != tmp->left, ((void *) 0) != tmp->right))
    {
      if (__VERIFIER_nondet_int("if_1"))
      {
        tmp = tmp->left;
      }
      else
      {
        tmp = tmp->right;
      }

    }

    TreeNode *newNode;
    if (__logand(((void *) 0) == tmp->left, __VERIFIER_nondet_int("if_3")))
    {
      newNode = malloc(sizeof(*newNode));
      tmp->left = newNode;
    }
    else
      if (__logand(((void *) 0) == tmp->right, __VERIFIER_nondet_int("if_4")))
    {
      newNode = malloc(sizeof(*newNode));
      tmp->right = newNode;
    }
    else
    {
      continue;
    }


    newNode->left = (void *) 0;
    newNode->right = (void *) 0;
    newNode->list = malloc(sizeof(*newNode->list));
    newNode->list->next = newNode->list;
    while (__VERIFIER_nondet_int("while_5"))
    {
      tmpList = malloc(sizeof(ListNode));
      tmpList->next = tree->list->next;
      tree->list->next = tmpList;
    }

  }

  while (((void *) 0) != tree)
  {
    tmp = tree;
    TreeNode *pred = (void *) 0;
    while (__logor(((void *) 0) != tmp->left, ((void *) 0) != tmp->right))
    {
      pred = tmp;
      if (((void *) 0) != tmp->left)
      {
        tmp = tmp->left;
      }
      else
      {
        tmp = tmp->right;
      }

    }

    if (((void *) 0) != pred)
    {
      if (tmp == pred->left)
      {
        pred->left = (void *) 0;
      }
      else
      {
        pred->right = (void *) 0;
      }

    }
    else
    {
      tree = (void *) 0;
    }

    while (tmp->list != tmp->list->next)
    {
      tmpList = tmp->list->next;
      tmp->list->next = tmpList->next;
      free(tmpList);
    }

    free(tmp->list);
    free(tmp);
  }

  return 0;
}

