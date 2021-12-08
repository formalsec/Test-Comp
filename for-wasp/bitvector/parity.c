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

extern unsigned int __VERIFIER_nondet_uint(char *);
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
  unsigned int v = __VERIFIER_nondet_uint("v");
  unsigned int v1;
  unsigned int v2;
  char parity1;
  char parity2;
  v1 = v;
  parity1 = (char) 0;
  while (v1 != 0)
  {
    if (parity1 == ((char) 0))
    {
      parity1 = (char) 1;
    }
    else
    {
      parity1 = (char) 0;
    }

    v1 = v1 & (v1 - 1U);
  }

  v2 = v;
  parity2 = (char) 0;
  v2 = v2 ^ (v2 >> 1u);
  v2 = v2 ^ (v2 >> 2u);
  v2 = (v2 & 286331153U) * 286331153U;
  if (((v2 >> 28u) & 1u) == 0)
  {
    parity2 = (char) 0;
  }
  else
  {
    parity2 = (char) 1;
  }

  __VERIFIER_assert(parity1 == parity2);
  return 0;
}

