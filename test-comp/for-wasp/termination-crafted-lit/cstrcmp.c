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

int cstrcmp(const char *s1, const char *s2)
{
  unsigned char uc1;
  unsigned char uc2;
  while (__logand((*s1) != '\0', (*s1) == (*s2)))
  {
    s1++;
    s2++;
  }

  uc1 = *((unsigned char *) s1);
  uc2 = *((unsigned char *) s2);
  return (uc1 < uc2) ? (-1) : (uc1 > uc2);
}

int main()
{
  return cstrcmp(build_nondet_String(), build_nondet_String());
}

