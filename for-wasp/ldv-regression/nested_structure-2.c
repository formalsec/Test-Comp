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

  return;
}

typedef struct Toplev
{
  int a;
  struct Inner
  {
    int b;
    struct Innermost
    {
      int c;
    } *y;
  } *x;
} Stuff;
int main()
{
  struct Innermost im = {3};
  struct Inner inner = {2, &im};
  struct Toplev good = {1, &inner};
  good.x->y->c = 4;
  __VERIFIER_assert(good.x->y->c == 4);
  return 0;
}

