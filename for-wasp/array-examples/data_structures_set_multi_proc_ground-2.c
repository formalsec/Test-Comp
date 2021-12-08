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

extern int __VERIFIER_nondet_int(char *);
int insert(int set[], int size, int value)
{
  set[size] = value;
  return size + 1;
}

int elem_exists(int set[], int size, int value)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (set[i] == value)
      return 1;

  }

  return 0;
}

int main()
{
  int n = 0;
  int set[100000];
  int x;
  int y;
  for (x = 0; x < 100000; x++)
  {
    set[x] = __VERIFIER_nondet_int("set[x]");
  }

  for (x = 0; x < n; x++)
  {
    for (y = x + 1; y < n; y++)
    {
      __VERIFIER_assert(set[x] != set[y]);
    }

  }

  int values[100000];
  int v;
  for (v = 0; v < 100000; v++)
  {
    values[v] = __VERIFIER_nondet_int("values[v]");
  }

  for (v = 0; v < 100000; v++)
  {
    if (!elem_exists(set, n, values[v]))
    {
      n = insert(set, n, values[v]);
    }

  }

  for (x = 0; x < n; x++)
  {
    for (y = x + 1; y < n; y++)
    {
      __VERIFIER_assert(set[x] != set[y]);
    }

  }

  return 0;
}

