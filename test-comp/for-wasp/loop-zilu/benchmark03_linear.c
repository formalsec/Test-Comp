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
  int i = __VERIFIER_nondet_int("i");
  int j = __VERIFIER_nondet_int("j");
  _Bool flag = __VERIFIER_nondet_bool("flag");
  x = 0;
  y = 0;
  if (!__logand(i == 0, j == 0))
    return 0;

  while (__VERIFIER_nondet_bool("while_1"))
  {
    x++;
    y++;
    i += x;
    j += y;
    if (flag)
      j += 1;

  }

  __VERIFIER_assert(j >= i);
  return 0;
}

