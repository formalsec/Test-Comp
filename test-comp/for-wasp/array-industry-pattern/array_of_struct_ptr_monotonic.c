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

struct S
{
  int t;
  int *p1;
};
struct S *a[100000];
int main()
{
  int i;
  for (i = 0; i < 100000; i = i + 2)
  {
    struct S *s = (struct S *) malloc(sizeof(struct S));
    s->t = __VERIFIER_nondet_int("t");
    if (s->t == 10)
      s->p1 = (int *) malloc(sizeof(int));

    a[i] = s;
  }

  for (i = 0; i < 100000; i = i + 2)
  {
    struct S *u = a[i];
    if (u->t == 10)
    {
      __VERIFIER_assert(u->p1 != ((void *) 0));
    }

  }

}

