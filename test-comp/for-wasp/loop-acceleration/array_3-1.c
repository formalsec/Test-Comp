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

  return;
}

int main(void)
{
  int A[1024];
  int i;
  for (i = 0; i < 1024; i++)
  {
    A[i] = __VERIFIER_nondet_int("A[i]");
  }

  for (i = 0; A[i] != 0; i++)
  {
    if (i >= (1024 - 1))
    {
      break;
    }

  }

  __VERIFIER_assert(i <= 1024);
}

