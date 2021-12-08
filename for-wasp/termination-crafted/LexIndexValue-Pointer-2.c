typedef long unsigned int size_t;
void *malloc(size_t __size);
extern void free(void *);
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int *p = malloc(1048 * (sizeof(int)));
  int *q = p;
  for (int i = 0; i < 1048; i++)
  {
    *(q + i) = __VERIFIER_nondet_int("*(q+i)");
  }

  q = p;
  while (__logand(q < (p + 1048), (*q) >= 0))
  {
    if (__VERIFIER_nondet_int("if_1"))
    {
      q++;
    }
    else
    {
      (*q)--;
    }

  }

  free(p);
  return 0;
}

