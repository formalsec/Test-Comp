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
void bubbleSort(int numbers[], int array_size)
{
  int i;
  int j;
  int temp;
  for (i = array_size - 1; i >= 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      if (numbers[j - 1] > numbers[j])
      {
        temp = numbers[j - 1];
        numbers[j - 1] = numbers[j];
        numbers[j] = temp;
      }

    }

  }

}

int main()
{
  int array_size = __VERIFIER_nondet_int("array_size");
  if (__logor(array_size < 1, array_size >= (2147483647 / (sizeof(int)))))
  {
    array_size = 1;
  }

  int *numbers = (int *) alloca(array_size * (sizeof(int)));
  for (int k = 0; k < array_size; k++)
  {
    numbers[k] = __VERIFIER_nondet_int("numbers[k]");
  }

  bubbleSort(numbers, array_size);
  return 0;
}
