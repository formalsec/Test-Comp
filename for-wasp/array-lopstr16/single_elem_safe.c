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
  int *p;
  int n;
};
struct S *a[1000000];
int main()
{
  int i;
  for (i = 0; i < 1000000; i++)
  {
    int q = __VERIFIER_nondet_int("q");
    struct S *s = (void *) 0;
    if (q == 0)
    {
      s = (struct S *) malloc(sizeof(struct S));
      s->n = q % 2;
    }

    if (s != 0)
    {
      if (s->n == 0)
      {
        s->p = (int *) malloc(sizeof(int));
      }
      else
      {
        s->p = (void *) 0;
      }

    }

    a[i] = s;
  }

  a[3] = (struct S *) malloc(sizeof(struct S));
  for (i = 0; i < 1000000; i++)
  {
    struct S *s1 = a[i];
    if (__logand(__logand(i != 3, s1 != ((void *) 0)), s1->n == 0))
    {
      __VERIFIER_assert(s1->p != ((void *) 0));
    }

  }

  return 0;
}

