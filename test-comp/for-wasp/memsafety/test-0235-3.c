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
typedef unsigned long long restr_t;
void summ_not_implemented_error(char *fname);
void summ_print_byte(char byte);
void *summ_maximize(void *sym_var, unsigned int length);
int summ_is_symbolic(void *sym_var, unsigned int length);
void *summ_new_sym_var(unsigned int length);
void summ_assume(restr_t restr);
void *_solver_Concat(void *sym_var, void *sym_var2, unsigned int length1, unsigned int length2);
void *_solver_Extract(void *sym_var, unsigned int start, unsigned int end, unsigned int length);
void *_solver_ZeroExt(void *sym_var, unsigned int to_extend, unsigned int length);
void *_solver_SignExt(void *sym_var, unsigned int to_extend, unsigned int length);
void summ_print_restriction(restr_t restr);
restr_t _solver_NOT(restr_t restr1);
restr_t _solver_Or(restr_t restr1, restr_t restr2);
restr_t _solver_And(restr_t restr1, restr_t restr2);
restr_t _solver_EQ(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_NEQ(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_LT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_LE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SLT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SLE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_IF(restr_t restr, void *sym_var, void *sym_var2, unsigned int length);
int _solver_is_it_possible(restr_t restr);
restr_t summ_true();
restr_t summ_false();
int _solver_must_be(restr_t restr);
int is_numeric(char c);
restr_t _solver_GE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_GT(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SGE(void *sym_var, void *sym_var2, unsigned int length);
restr_t _solver_SGT(void *sym_var, void *sym_var2, unsigned int length);
restr_t sym_is_numeric(void *var);
int pow(int x, unsigned n);
restr_t equal_rstr(char *s1, char *s2, int n);
int memcmp1(void *s1, void *s2, int n);
int memcmp2(void *s1, void *s2, int n);
int memcmp3(void *s1, void *s2, int n);
int memcmp4(void *s1, void *s2, int n);
void *memset1(void *str, int c, int n);
void *memcpy1(void *dest, void *src, int n);
void *memmove1(void *dest, void *src, int n);
void *memmove2(void *dest, void *src, int n);
char *memchr1(char *s, int c, int n);
char *memchr2(char *s, int c, int n);
char *memchr3(char *s, int c, int n);
char *memchr4(char *s, int c, int n);
char *strncpy1(char *dest, char *source, int n);
char *strncpy2(char *dest, char *source, int n);
int strlen1(char *s);
int strlen2(char *s);
int strlen3(char *s);
int strcmp1(char *s1, char *s2);
int strcmp2(char *s1, char *s2);
int strcmp3(char *s1, char *s2);
int strlen(char *s);
int strcmp(char *s1, char *s2);
char *strncpy(char *, char *, int);
int memcmp(void *s1, void *s2, int n);
void *memcpy(void *, void *, int);
void *memset(void *, int, int);
void *memmove(void *dest, void *src, int n);
char *memchr(char *s, int c, int n);
static void *calloc_model(size_t nmemb, size_t size)
{
  void *ptr = malloc(nmemb * size);
  return memset(ptr, 0, nmemb * size);
}

extern int __VERIFIER_nondet_int(char *);
struct L4
{
  struct L4 *next;
  struct L5 *down;
};
struct L3
{
  struct L4 *down;
  struct L3 *next;
};
struct L2
{
  struct L2 *next;
  struct L3 *down;
};
struct L1
{
  struct L2 *down;
  struct L1 *next;
};
struct L0
{
  struct L0 *next;
  struct L1 *down;
};
static void *zalloc_or_die(unsigned size)
{
  void *ptr = calloc_model(1U, size);
  if (ptr)
    return ptr;

  abort();
}

static void l4_insert(struct L4 **list)
{
  struct L4 *item = zalloc_or_die(sizeof(*item));
  item->down = zalloc_or_die(119U);
  item->next = *list;
  *list = item;
}

static void l3_insert(struct L3 **list)
{
  struct L3 *item = zalloc_or_die(sizeof(*item));
  do
    l4_insert(&item->down);
  while (__VERIFIER_nondet_int("while_1"));
  item->next = *list;
  *list = item;
}

static void l2_insert(struct L2 **list)
{
  struct L2 *item = zalloc_or_die(sizeof(*item));
  do
    l3_insert(&item->down);
  while (__VERIFIER_nondet_int("while_2"));
  item->next = *list;
  *list = item;
}

static void l1_insert(struct L1 **list)
{
  struct L1 *item = zalloc_or_die(sizeof(*item));
  do
    l2_insert(&item->down);
  while (__VERIFIER_nondet_int("while_3"));
  item->next = *list;
  *list = item;
}

static void l0_insert(struct L0 **list)
{
  struct L0 *item = zalloc_or_die(sizeof(*item));
  do
    l1_insert(&item->down);
  while (__VERIFIER_nondet_int("while_4"));
  item->next = *list;
  *list = item;
}

static void l4_destroy(struct L4 *list, int level)
{
  do
  {
    if (5 == level)
      free(list->down);

    struct L4 *next = list->next;
    if (4 == level)
      free(list);

    list = next;
  }
  while (list);
}

static void l3_destroy(struct L3 *list, int level)
{
  do
  {
    if (3 < level)
      l4_destroy(list->down, level);

    struct L3 *next = list->next;
    if (3 == level)
      free(list);

    list = next;
  }
  while (list);
}

static void l2_destroy(struct L2 *list, int level)
{
  do
  {
    if (2 < level)
      l3_destroy(list->down, level);

    struct L2 *next = list->next;
    if (2 == level)
      free(list);

    list = next;
  }
  while (list);
}

static void l1_destroy(struct L1 *list, int level)
{
  do
  {
    if (1 < level)
      l2_destroy(list->down, level);

    struct L1 *next = list->next;
    if (1 == level)
      free(list);

    list = next;
  }
  while (list);
}

static void l0_destroy(struct L0 *list, int level)
{
  do
  {
    if (0 < level)
      l1_destroy(list->down, level);

    struct L0 *next = list->next;
    if (0 == level)
      free(list);

    list = next;
  }
  while (list);
}

int main()
{
  static struct L0 *list;
  do
    l0_insert(&list);
  while (__VERIFIER_nondet_int("while_5"));
  l0_destroy(list, 5);
  l0_destroy(list, 4);
  l0_destroy(list, 3);
  l0_destroy(list, 2);
  l0_destroy(list, 2);
  l0_destroy(list, 1);
  l0_destroy(list, 0);
  return !(!list);
}

