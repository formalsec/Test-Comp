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

extern unsigned short __VERIFIER_nondet_ushort(char *);
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

int main()
{
  unsigned short x = __VERIFIER_nondet_ushort("x");
  unsigned short y = __VERIFIER_nondet_ushort("y");
  unsigned int xx;
  unsigned int yy;
  unsigned int zz;
  unsigned int z = 0;
  unsigned int i = 0;
  while (i < ((sizeof(x)) * 8))
  {
    z |= ((x & (1U << i)) << i) | ((y & (1U << i)) << (i + 1));
    i += 1U;
  }

  xx = x;
  yy = y;
  xx = (xx | (xx << 8u)) & 16711935U;
  xx = (xx | (xx << 4u)) & 252645135U;
  xx = (xx | (xx << 2u)) & 858993459U;
  xx = (xx | (xx << 1u)) & 1431655765U;
  yy = (yy | (yy << 8u)) & 16711935U;
  yy = (yy | (yy << 4u)) & 252645135U;
  yy = (yy | (yy << 2u)) & 858993459U;
  yy = (yy | (yy << 1u)) & 1431655765U;
  zz = xx | (yy << 1U);
  __VERIFIER_assert(z == zz);
}

