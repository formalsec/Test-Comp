typedef long unsigned int size_t;
void *malloc(size_t __size);
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int *p = malloc(sizeof(int));
  *p = __VERIFIER_nondet_int("p");
  while ((*p) >= 0)
  {
    (*p)--;
  }

  return 0;
}

