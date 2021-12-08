extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "fo_test.i", 3, "reach_error");
}

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
int open(const char *pathname, int flags, ...);
int close(int fd);
ssize_t read(int fd, void *buf, size_t len);
void __blast_assert()
{
  ERROR:
  {
    reach_error();
    abort();
  }

}

extern int __VERIFIER_nondet_int(char *);
int stubopen(const char *__file, int __oflag, ...)
{
  return __VERIFIER_nondet_int("return_1");
}

int globalState = 0;
ssize_t l_read(int, char *, size_t);
int l_open(char *, int);
int main()
{
  int file = l_open("unknown", 00);
  void *cbuf = (void *) malloc((sizeof(char)) * 100);
  int a = l_read(file, cbuf, 99);
  return 0;
}

ssize_t l_read(int fd, char *cbuf, size_t count)
{
  (globalState == 1) ? (0) : (__blast_assert());
  return read(fd, cbuf, count);
}

int l_open(char *file, int flags)
{
  int fd = stubopen(file, flags);
  if (fd > 0)
    globalState = 1;

  return fd;
}

