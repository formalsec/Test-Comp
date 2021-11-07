typedef long unsigned int size_t;
void *malloc(size_t __size);
extern int __VERIFIER_nondet_int(char *);
char *build_nondet_String(void)
{
  int length = __VERIFIER_nondet_int("length");
  if (length < 1)
  {
    length = 1;
  }

  char *nondetString = (char *) malloc(length * (sizeof(char)));
  nondetString[length - 1] = '\0';
  return nondetString;
}

int cstrlen(const char *s)
{
  const char *p = s;
  while ((*p) != '\0')
    p++;

  return (int) (p - s);
}

int main()
{
  return cstrlen(build_nondet_String());
}

