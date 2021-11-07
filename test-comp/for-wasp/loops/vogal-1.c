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

char __VERIFIER_nondet_char(char *);
int main(void)
{
  char input_string[5];
  char vogal_array[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', '\0'};
  ;
  unsigned int i;
  unsigned int j;
  unsigned int cont;
  unsigned int tam_string;
  unsigned int n_caracter;
  for (i = 0; i < 5; i++)
    input_string[i] = __VERIFIER_nondet_char("input_string[i]");

  if (!(input_string[5 - 1] == '\0'))
    return 0;

  n_caracter = 0;
  while (input_string[n_caracter] != '\0')
    n_caracter++;

  cont = 0;
  for (i = 0; i < n_caracter; i++)
    for (j = 0; j < (5 / 2); j++)
    if (input_string[i] == vogal_array[j])
    cont++;



  i = 0;
  int cont_aux = 0;
  while (input_string[i] != '\0')
  {
    for (j = 0; j < (5 / 2); j++)
    {
      if (input_string[i] == vogal_array[j])
        cont_aux++;

    }

    i++;
  }

  __VERIFIER_assert(cont_aux == cont);
  return 0;
}

