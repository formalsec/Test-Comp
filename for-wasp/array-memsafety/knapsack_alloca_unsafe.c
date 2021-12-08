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
void knapsack(int size[], int val[], int N, int cost[], int best[], int M)
{
  int i;
  int j;
  for (j = 1; j <= N; j++)
  {
    for (i = 1; i <= M; i++)
    {
      if (i >= size[j])
      {
        if (cost[i] < (cost[i - size[j]] + val[j]))
        {
          cost[i] = cost[i - size[j]] + val[j];
          best[i] = j;
        }

      }

    }

  }

}

int main()
{
  int N = __VERIFIER_nondet_int("N");
  int M = __VERIFIER_nondet_int("M");
  if (N < 1)
  {
    N = 1;
  }

  if (M < 1)
  {
    M = 1;
  }

  int *size = (int *) alloca(N * (sizeof(int)));
  int *val = (int *) alloca(N * (sizeof(int)));
  int *cost = (int *) alloca(M * (sizeof(int)));
  int *best = (int *) alloca(M * (sizeof(int)));
  for (int i = 0; i < N; i++)
  {
    size[i] = __VERIFIER_nondet_int("size[i]");
    val[i] = __VERIFIER_nondet_int("val[i]");
  }

  for (int i = 0; i < M; i++)
  {
    cost[i] = __VERIFIER_nondet_int("cost[i]");
  }

  knapsack(size, val, N, cost, best, M);
  return 0;
}

