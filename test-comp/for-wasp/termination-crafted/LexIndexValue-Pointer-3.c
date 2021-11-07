typedef long unsigned int size_t;
void *malloc(size_t __size);
void free(void *__ptr);
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int *p = malloc(1048 * (sizeof(int)));
  for (int i = 0; i < 1048; ++i)
  {
    p[i] = __VERIFIER_nondet_int("p[i]");
  }

  int *q = p;
  while (__logand((*q) >= 0, q < (p + (1048 * (sizeof(int))))))
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

