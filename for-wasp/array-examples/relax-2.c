extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

extern unsigned long __VERIFIER_nondet_ulong(char *);
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

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
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
_Bool is_relaxed_prefix(int pat[], unsigned long pat_length, int a[], unsigned long a_length)
{
  if (pat_length > (a_length + 1))
    return 0;

  int shift = 0;
  for (int i = 0; __logand(i < pat_length, i < a_length); i++)
  {
    if (pat[i] != a[i - shift])
    {
      if (shift == 0)
        shift = 1;
      else
        return 0;

    }

  }

  if (__logand(pat_length > a_length, shift == 1))
    return 0;
  else
    return 1;

}

int main()
{
  unsigned long pat_len = __VERIFIER_nondet_ulong("pat_len");
  unsigned long a_len = __VERIFIER_nondet_ulong("a_len");
  int *pat = malloc((sizeof(int)) * pat_len);
  int *a = malloc((sizeof(int)) * a_len);
  for (int j = 0; j < pat_len; j++)
  {
    pat[j] = __VERIFIER_nondet_int("pat[j]");
  }

  for (int j = 0; j < a_len; j++)
  {
    a[j] = __VERIFIER_nondet_int("a[j]");
  }

  if (is_relaxed_prefix(pat, pat_len, a, a_len))
  {
    __VERIFIER_assert(pat_len <= (a_len + 1));
    unsigned long different = __VERIFIER_nondet_ulong("different");
    if (pat_len > a_len)
      different = pat_len - 1;

    for (int i = 0; __logand(i < pat_len, i < a_len); i++)
    {
      if (i < different)
        assume_abort_if_not(pat[i] == a[i]);
      else
        if (i == different)
        assume_abort_if_not(pat[i] != a[i]);
      else
        if (i > different)
        __VERIFIER_assert(pat[i] == a[i - 1]);



    }

  }
  else
    if (pat_len <= (a_len + 1))
  {
    unsigned long differences = 0;
    for (int i = 0; __logand(i < pat_len, i < a_len); i++)
    {
      if (pat[i] != a[i - differences])
        ++differences;

    }

    if (pat_len > a_len)
      ++differences;

    __VERIFIER_assert(differences > 1);
  }


  return 0;
}

