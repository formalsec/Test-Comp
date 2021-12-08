typedef unsigned int size_t;
extern void *malloc(size_t __size);
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

struct _S
{
  int *p;
  int n;
};
typedef struct _S S;
S *a[100000];
int user_read()
{
  int x = __VERIFIER_nondet_int("x");
  return x;
}

int main()
{
  int i;
  for (i = 0; i < 100000; i++)
  {
    S *s1 = (S *) malloc(sizeof(S));
    s1->n = user_read();
    if (s1->n == 1)
    {
      s1->p = (int *) malloc(sizeof(int));
    }
    else
    {
      s1->p = (void *) 0;
    }

    a[i] = s1;
  }

  for (i = 0; i < 100000; i++)
  {
    S *s2 = a[i];
    if (s2->n == 1)
    {
      __VERIFIER_assert(s2->p != ((void *) 0));
    }

  }

  return 0;
}

