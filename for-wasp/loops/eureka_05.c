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

int array[5];
int n = 5;
void SelectionSort()
{
  int lh;
  int rh;
  int i;
  int temp;
  for (lh = 0; lh < n; lh++)
  {
    rh = lh;
    for (i = lh + 1; i < n; i++)
      if (array[i] < array[rh])
      rh = i;


    temp = array[lh];
    array[lh] = array[rh];
    array[rh] = temp;
  }

}

int main(void)
{
  int array[5];
  int i;
  for (i = 5 - 1; i >= 0; i--)
    array[i] = i;

  SelectionSort();
  for (i = 0; i < 5; i++)
    __VERIFIER_assert(array[i] == i);

}

