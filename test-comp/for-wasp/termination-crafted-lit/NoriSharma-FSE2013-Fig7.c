typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int a;
  int b;
  int c;
  int i;
  int j;
  int M;
  int N;
  i = __VERIFIER_nondet_int("i");
  j = __VERIFIER_nondet_int("j");
  M = __VERIFIER_nondet_int("M");
  N = __VERIFIER_nondet_int("N");
  a = i;
  b = j;
  c = 0;
  while (__logor(i < M, j < N))
  {
    i = i + 1;
    j = j + 1;
    c = c + 1;
  }

  return 0;
}

