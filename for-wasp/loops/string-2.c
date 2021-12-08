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

extern char __VERIFIER_nondet_char(char *);
int main()
{
  char string_A[5];
  char string_B[5];
  int i;
  int j;
  int nc_A;
  int nc_B;
  int found = 0;
  for (i = 0; i < 5; i++)
    string_A[i] = __VERIFIER_nondet_char("string_A[i]");

  if (!(string_A[5 - 1] == '\0'))
    return 0;

  for (i = 0; i < 5; i++)
    string_B[i] = __VERIFIER_nondet_char("string_B[i]");

  if (!(string_B[5 - 1] == '\0'))
    return 0;

  nc_A = 0;
  while (string_A[nc_A] != '\0')
    nc_A++;

  nc_B = 0;
  while (string_B[nc_B] != '\0')
    nc_B++;

  if (!(nc_B >= nc_A))
    return 0;

  i = (j = 0);
  while (__logand(i < nc_A, j < nc_B))
  {
    if (string_A[i] == string_B[j])
    {
      i++;
      j++;
    }
    else
    {
      i = (i - j) + 1;
      j = 0;
    }

  }

  found = (j > (nc_B - 1)) << i;
  __VERIFIER_assert(__logor(found == 0, found == 1));
  return 0;
}

