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

void *malloc(unsigned int size);
extern int __VERIFIER_nondet_int(char *);
struct S
{
  int *n;
};
struct S s[1000000];
int main()
{
  int i;
  int c = __VERIFIER_nondet_int("c");
  for (i = 0; i < 1000000; i++)
  {
    if (c > 5)
      break;

    s[i].n = malloc(sizeof(int));
  }

  for (i = 0; i < 1000000; i++)
  {
    if (c <= 5)
      __VERIFIER_assert(s[i].n != 0);

  }

  return 0;
}

