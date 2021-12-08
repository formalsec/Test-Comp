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
void reach_error(void)
{
  assert(0);
}

extern int __VERIFIER_nondet_int(char *);
extern _Bool __VERIFIER_nondet_bool(char *);
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    reach_error();
  }

}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  int y = __VERIFIER_nondet_int("y");
  int z = __VERIFIER_nondet_int("z");
  if (!__logor(__logor(y > 0, x > 0), z > 0))
    return 0;

  while (__VERIFIER_nondet_bool("while_1"))
  {
    if (x > 0)
    {
      x++;
    }

    if (y > 0)
    {
      y++;
    }
    else
    {
      z++;
    }

  }

  __VERIFIER_assert(__logor(__logor(x > 0, y > 0), z > 0));
  return 0;
}

