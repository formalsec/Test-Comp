extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "matrix-2.c", 3, "reach_error");
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

extern unsigned int __VERIFIER_nondet_uint(char *);
extern int __VERIFIER_nondet_int(char *);
int main()
{
  unsigned int N_LIN = __VERIFIER_nondet_uint("N_LIN");
  unsigned int N_COL = __VERIFIER_nondet_uint("N_COL");
  unsigned int j;
  unsigned int k;
  int matriz[N_COL][N_LIN];
  int maior;
  maior = __VERIFIER_nondet_int("maior");
  for (j = 0; j < N_COL; j++)
    for (k = 0; k < N_LIN; k++)
  {
    matriz[j][k] = __VERIFIER_nondet_int("matriz[j][k]");
    if (matriz[j][k] > maior)
      maior = matriz[j][k];

  }


  for (j = 0; j < N_COL; j++)
    for (k = 0; k < N_LIN; k++)
    __VERIFIER_assert(matriz[j][k] < maior);


}

