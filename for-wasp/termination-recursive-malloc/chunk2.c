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
extern int __VERIFIER_nondet_int(char *);
void chunk(int **data)
{
  int *p0 = data[0];
  int *p1 = data[1];
  int *p2 = data[2];
  int *p3 = data[3];
  if ((*p0) >= (*p3))
    return;

  (*p0)++;
  free(p1);
  data[1] = p2;
  data[2] = malloc(sizeof(int *));
  chunk(data);
}

int main()
{
  int **data = malloc(4 * (sizeof(int *)));
  int *p0 = malloc(sizeof(int));
  int *p1 = malloc(sizeof(int));
  int *p2 = malloc(sizeof(int));
  int *p3 = malloc(sizeof(int));
  int i = __VERIFIER_nondet_int("i");
  int upper = __VERIFIER_nondet_int("upper");
  if (i >= upper)
    return 0;

  *p0 = i;
  *p3 = upper;
  data[0] = p0;
  data[1] = p1;
  data[2] = p2;
  data[3] = p3;
  chunk(data);
  int *p1_new = (int *) data[1];
  int *p2_new = (int *) data[2];
  free(p1_new);
  free(p2_new);
}

