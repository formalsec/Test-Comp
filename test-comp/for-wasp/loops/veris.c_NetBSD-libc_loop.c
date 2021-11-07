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

typedef int Char;
Char *tmp;
int glob2(Char *pathbuf, Char *pathlim)
{
  Char *p;
  for (p = pathbuf; p <= pathlim; p++)
  {
    __VERIFIER_assert(p <= tmp);
    *p = 1;
  }

  return 0;
}

int main()
{
  Char pathbuf[1 + 1];
  Char *bound = (pathbuf + ((sizeof(pathbuf)) / (sizeof(*pathbuf)))) - 1;
  tmp = (pathbuf + ((sizeof(pathbuf)) / (sizeof(*pathbuf)))) - 1;
  glob2(pathbuf, bound);
  return 0;
}

