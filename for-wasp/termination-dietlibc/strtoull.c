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
unsigned long long int mystrtoull(const char *ptr, char **endptr, int base)
{
  int neg = 0;
  long long int v = 0;
  const char *orig;
  const char *nptr = ptr;
  while ((*nptr) == ' ')
    ++nptr;

  if ((*nptr) == '-')
  {
    neg = 1;
    nptr++;
  }
  else
    if ((*nptr) == '+')
    ++nptr;


  orig = nptr;
  if (__logand(base == 16, nptr[0] == '0'))
    goto skip0x;

  if (base)
  {
    register unsigned int b = base - 2;
    if (b > 34)
    {
      return 0;
    }

  }
  else
  {
    if ((*nptr) == '0')
    {
      base = 8;
      skip0x:
      if (__logor((*(nptr + 1)) == 'x', (*(nptr + 1)) == 'X'))
      {
        nptr += 2;
        base = 16;
      }


    }
    else
      base = 10;

  }

  while (*nptr)
  {
    register unsigned char c = *nptr;
    c = (c >= 'a') ? ((c - 'a') + 10) : ((c >= 'A') ? ((c - 'A') + 10) : ((c <= '9') ? (c - '0') : (0xff)));
    if (c >= base)
      break;

    {
      register unsigned long x = ((v & 0xff) * base) + c;
      register unsigned long long w = ((v >> 8) * base) + (x >> 8);
      v = (w << 8) + (x & 0xff);
    }
    ++nptr;
  }

  if (nptr == orig)
  {
    nptr = ptr;
    v = 0;
  }

  if (endptr)
    *endptr = (char *) nptr;

  return (neg) ? (-v) : (v);
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
  int base = __VERIFIER_nondet_int("base");
  char *end = 0;
  return mystrtoull(in, &end, base);
}

