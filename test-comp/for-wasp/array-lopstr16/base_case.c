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
void *malloc(unsigned int size);
struct S
{
  int n;
  int *p;
};
struct S *a[1000000];
int main()
{
  int i;
  for (i = 0; i < 1000000; i++)
  {
    struct S *s1 = (struct S *) malloc(sizeof(struct S));
    s1->n = __VERIFIER_nondet_int("n");
    if (s1->n == 0)
    {
      s1->p = (int *) malloc(sizeof(int));
    }
    else
    {
      s1->p = 0;
    }

    a[i] = s1;
  }

  for (i = 0; i < 1000000; i++)
  {
    struct S *s2 = a[i];
    if (s2->n == 0)
    {
      __VERIFIER_assert(s2->p != 0);
    }

  }

  return 0;
}

