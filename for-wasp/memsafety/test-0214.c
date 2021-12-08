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
extern int __VERIFIER_nondet_int(char *);
typedef void *list_t[2];
typedef list_t *list_p;
typedef enum 
{
  LIST_BEG,
  LIST_END
} end_point_t;
typedef void *item_t[2];
typedef item_t *item_p;
typedef enum 
{
  ITEM_PREV,
  ITEM_NEXT
} direction_t;
typedef struct 
{
  item_t head;
  char text[0x100 + 1];
} *user_item_p;
int is_empty(list_p list)
{
  int no_beg = !(*list)[LIST_BEG];
  int no_end = !(*list)[LIST_END];
  if (no_beg != no_end)
    free(list);

  return no_beg;
}

item_p create_item(end_point_t at, item_p link)
{
  user_item_p item = malloc(sizeof(*item));
  if (!item)
    abort();

  direction_t term_field;
  direction_t link_field;
  switch (at)
  {
    case LIST_BEG:
      link_field = ITEM_NEXT;
      term_field = ITEM_PREV;
      break;

    case LIST_END:
      link_field = ITEM_PREV;
      term_field = ITEM_NEXT;
      break;

  }

  item->head[link_field] = link;
  item->head[term_field] = (void *) 0;
  item->text[0] = '\0';
  item_p head = &item->head;
  if (link)
    (*link)[term_field] = head;

  return head;
}

void append_one(list_p list, end_point_t to)
{
  item_p item = create_item(to, (*list)[to]);
  (*list)[to] = item;
  if (((void *) 0) == (*list)[LIST_BEG])
    (*list)[LIST_BEG] = item;

  if (((void *) 0) == (*list)[LIST_END])
    (*list)[LIST_END] = item;

}

void remove_one(list_p list, end_point_t from)
{
  if (is_empty(list))
    return;

  if ((*list)[LIST_BEG] == (*list)[LIST_END])
  {
    free((*list)[LIST_BEG]);
    memset(*list, 0, sizeof(*list));
    return;
  }

  const direction_t next_field = (LIST_BEG == from) ? (ITEM_NEXT) : (ITEM_PREV);
  const direction_t term_field = (LIST_END == from) ? (ITEM_NEXT) : (ITEM_PREV);
  item_p item = (*list)[from];
  item_p next = (*item)[next_field];
  (*next)[term_field] = (void *) 0;
  (*list)[from] = next;
  free(item);
}

end_point_t rand_end_point(void)
{
  if (__VERIFIER_nondet_int("if_1"))
    return LIST_BEG;
  else
    return LIST_END;

}

int main()
{
  static list_t list;
  while (__VERIFIER_nondet_int("while_1"))
  {
    while (__VERIFIER_nondet_int("while_2"))
      append_one(&list, rand_end_point());

    while (__VERIFIER_nondet_int("while_3"))
      remove_one(&list, rand_end_point());

  }

  end_point_t end_point;
  direction_t direction;
  if (__VERIFIER_nondet_int("if_2"))
  {
    end_point = LIST_BEG;
    direction = ITEM_NEXT;
  }
  else
  {
    end_point = LIST_END;
    direction = ITEM_PREV;
  }

  item_p cursor = list[end_point];
  while (cursor)
  {
    item_p next = (*cursor)[direction];
    free(cursor);
    cursor = next;
  }

  return 0;
}

