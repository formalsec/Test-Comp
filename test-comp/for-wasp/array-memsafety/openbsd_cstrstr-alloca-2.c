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
extern char __VERIFIER_nondet_char(char *);
size_t cstrlen(const char *str)
{
  const char *s;
  for (s = str; *s; ++s)
    ;

  return s - str;
}

int cstrncmp(const char *s1, const char *s2, size_t n)
{
  if (n == 0)
    return 0;

  do
  {
    if ((*s1) != (*(s2++)))
      return (*((unsigned char *) s1)) - (*((unsigned char *) (--s2)));

    if ((*(s1++)) == 0)
      break;

  }
  while ((--n) != 0);
  return 0;
}

char *cstrstr(const char *s, const char *find)
{
  char c;
  char sc;
  size_t len;
  if ((c = *(find++)) != 0)
  {
    len = cstrlen(find);
    do
    {
      do
      {
        if ((sc = *(s++)) == 0)
          return (void *) 0;

      }
      while (sc != c);
    }
    while (cstrncmp(s, find, len) != 0);
    s--;
  }

  return (char *) s;
}

int main()
{
  int length1 = __VERIFIER_nondet_int("length1");
  int length2 = __VERIFIER_nondet_int("length2");
  if (length1 < 1)
  {
    length1 = 1;
  }

  if (length2 < 1)
  {
    length2 = 1;
  }

  char *nondetString1 = (char *) alloca(length1 * (sizeof(char)));
  char *nondetString2 = (char *) alloca(length2 * (sizeof(char)));
  for (int i = 0; i < length1; i++)
  {
    nondetString1[i] = __VERIFIER_nondet_char("nondetString1[i]");
  }

  for (int i = 0; i < length2; i++)
  {
    nondetString2[i] = __VERIFIER_nondet_char("nondetString2[i]");
  }

  nondetString1[length1 - 1] = '\0';
  nondetString2[length2 - 1] = '\0';
  return cstrstr(nondetString1, nondetString2);
}

