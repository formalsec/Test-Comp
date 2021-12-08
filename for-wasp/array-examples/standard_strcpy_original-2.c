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

extern int __VERIFIER_nondet_int(char *);
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

int main()
{
  int src[100000];
  int dst[100000];
  int i = 0;
  int j = 0;
  while (j < 100000)
  {
    src[j] = __VERIFIER_nondet_int("src[j]");
    j = j + 1;
  }

  while (__logand(i < 100000, src[i] != 0))
  {
    dst[i] = src[i];
    i = i + 1;
  }

  i = 0;
  while (__logand(i < 100000, src[i] != 0))
  {
    __VERIFIER_assert(dst[i] == src[i]);
    i = i + 1;
  }

  return 0;
}

