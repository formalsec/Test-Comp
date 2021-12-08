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

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

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

int __VERIFIER_nondet_int();
int main()
{
  int idBitLength;
  int material_length;
  int nlen;
  int j;
  int k;
  nlen = __VERIFIER_nondet_int("nlen");
  idBitLength = __VERIFIER_nondet_int("idBitLength");
  material_length = __VERIFIER_nondet_int("material_length");
  if (!(nlen == (idBitLength / 32)))
    return 0;

  for (j = 0; __logand(j < (idBitLength / 8), j < material_length); j++)
  {
    __VERIFIER_assert(0 <= j);
    __VERIFIER_assert(j < material_length);
    __VERIFIER_assert(0 <= (j / 4));
    __VERIFIER_assert((j / 4) < nlen);
  }

  return 0;
}

