typedef long unsigned int size_t;
void *malloc(size_t __size);
void free(void *__ptr);
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int *p = malloc(sizeof(int));
  while ((*p) >= 0)
  {
    (*p)--;
  }

  free(p);
  return 0;
}

