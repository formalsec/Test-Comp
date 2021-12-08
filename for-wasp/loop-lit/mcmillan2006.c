extern void *malloc(unsigned int __size);
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

  return;
}

int __VERIFIER_nondet_int();
extern void *malloc(unsigned int size);
int main()
{
  int n = __VERIFIER_nondet_int("n");
  if (!__logand(0 <= n, n <= 1000))
    return 0;

  int *x = malloc(n * (sizeof(int)));
  for (int i = 0; i < n; i++)
    x[i] = 0;

  for (int i = 0; i < n; i++)
    __VERIFIER_assert(x[i] == 0);

  return 0;
}

