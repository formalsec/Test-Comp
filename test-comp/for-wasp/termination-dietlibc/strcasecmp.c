typedef signed long ptrdiff_t;
typedef unsigned long size_t;
typedef int wchar_t;
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
void *alloca(size_t size);
extern int __VERIFIER_nondet_int(char *);
int strcasecmp(const char *s1, const char *s2)
{
  register unsigned int x2;
  register unsigned int x1;
  while (1)
  {
    x2 = (*s2) - 'A';
    if (x2 < 26u)
      x2 += 32;

    x1 = (*s1) - 'A';
    if (x1 < 26u)
      x1 += 32;

    s1++;
    s2++;
    if (x2 != x1)
      break;

    if (x1 == ((unsigned int) (-'A')))
      break;

  }

  return x1 - x2;
}

int main()
{
  int in_len = __VERIFIER_nondet_int("in_len");
  if (in_len < 1)
  {
    return 1;
  }

  char *in = alloca(in_len);
  in[in_len - 1] = 0;
  int out_len = __VERIFIER_nondet_int("out_len");
  if (out_len < 1)
  {
    return 1;
  }

  char *out = alloca(in_len);
  out[out_len - 1] = 0;
  return strcasecmp(in, out);
}

