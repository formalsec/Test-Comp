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

extern char __VERIFIER_nondet_char(char *);
int main(void)
{
  char string_entrada[10];
  char vetor_vogais[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', '\0'};
  ;
  unsigned int i;
  unsigned int j;
  unsigned int cont;
  unsigned int tam_string;
  unsigned int n_caracter;
  for (i = 0; i < 10; i++)
    string_entrada[i] = __VERIFIER_nondet_char("string_entrada[i]");

  string_entrada[10 - 1] = '\0';
  n_caracter = 0;
  while (string_entrada[n_caracter] != '\0')
    n_caracter++;

  cont = 0;
  for (i = 0; i < n_caracter; i++)
    for (j = 0; j < 8; j++)
    if (string_entrada[i] == vetor_vogais[j])
    cont++;



  i = 0;
  int cont_aux = 0;
  while (string_entrada[i] != '\0')
  {
    for (j = 0; j < 10; j++)
    {
      if (string_entrada[i] == vetor_vogais[j])
        cont_aux++;

    }

    i++;
  }

  __VERIFIER_assert(cont_aux == cont);
  return 0;
}

