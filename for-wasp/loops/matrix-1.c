extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "matrix-1.c", 3, "reach_error");
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

int __VERIFIER_nondet_int(char *);
int main()
{
  unsigned int N_LIN = 1;
  unsigned int N_COL = 1;
  unsigned int j;
  unsigned int k;
  int matriz[N_COL][N_LIN];
  int maior;
  maior = __VERIFIER_nondet_int("maior");
  for (j = 0; j < N_COL; j++)
    for (k = 0; k < N_LIN; k++)
  {
    matriz[j][k] = __VERIFIER_nondet_int("matriz[j][k]");
    if (matriz[j][k] >= maior)
      maior = matriz[j][k];

  }


  __VERIFIER_assert(matriz[0][0] <= maior);
  return 0;
}

