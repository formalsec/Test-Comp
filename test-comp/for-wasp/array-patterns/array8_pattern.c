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
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "array8_pattern.c", 28, "reach_error");
}

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

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

}

extern int __VERIFIER_nondet_int(char *);
extern short __VERIFIER_nondet_short(char *);
signed long long ARR_SIZE;
int main()
{
  ARR_SIZE = (signed long long) __VERIFIER_nondet_short("ARR_SIZE");
  assume_abort_if_not(ARR_SIZE > 0);
  int *array1 = (int *) malloc((sizeof(int)) * ARR_SIZE);
  int *array2 = (int *) malloc((sizeof(int)) * ARR_SIZE);
  int count = 0;
  int num = -1;
  signed long long sum = 0;
  int temp;
  short index;
  for (count = 0; count < ARR_SIZE; count++)
  {
    array1[count] = 0;
    array2[count] = 0;
  }

  count = 1;
  while (1)
  {
    index = __VERIFIER_nondet_short("index");
    assume_abort_if_not(__logand(index >= 0, index < ARR_SIZE));
    array1[index] = num * (num * count);
    array2[index] = ((index % 2) == 0) ? (array2[index]) : (num * count);
    temp = __VERIFIER_nondet_int("temp");
    if (temp == 0)
      break;

  }

  for (count = 0; count < ARR_SIZE; count++)
  {
    sum = (sum + array1[count]) + array2[count];
  }

  __VERIFIER_assert((2 * sum) <= (ARR_SIZE + 1));
  return 0;
}

