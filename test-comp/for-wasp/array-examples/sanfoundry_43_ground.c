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

}

extern int __VERIFIER_nondet_int(char *);
void incrementArray(int src[100000], int dst[100000])
{
  int i;
  for (i = 0; i < 100000; i++)
  {
    dst[i] = src[i] + 1;
  }

}

int main()
{
  int src[100000];
  int dst[100000];
  for (int i = 0; i < 100000; i++)
  {
    src[i] = __VERIFIER_nondet_int("src[i]");
  }

  incrementArray(src, dst);
  int x;
  for (x = 0; x < 100000; x++)
  {
    src[x] = dst[x] - 1;
  }

  return 0;
}

