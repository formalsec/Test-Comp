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
  int n;
};
struct S s[100000];
int main()
{
  int i;
  int c;
  c = __VERIFIER_nondet_int("c");
  for (i = 0; i < 100000; i++)
  {
    if (c > 5)
      break;

    s[i].n = 10;
  }

  for (i = 0; i < 100000; i++)
  {
    if (c <= 5)
      __VERIFIER_assert(s[i].n == 10);

  }

  return 0;
}

