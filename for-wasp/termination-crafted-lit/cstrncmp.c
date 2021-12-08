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

int cstrncmp(const char *s1, const char *s2, int n)
{
  unsigned char uc1;
  unsigned char uc2;
  if (n == 0)
    return 0;

  while (__logand((n--) > 0, (*s1) == (*s2)))
  {
    if (__logor(n == 0, (*s1) == '\0'))
      return 0;

    s1++;
    s2++;
  }

  uc1 = *((unsigned char *) s1);
  uc2 = *((unsigned char *) s2);
  return (uc1 < uc2) ? (-1) : (uc1 > uc2);
}

int main()
{
  return cstrncmp(build_nondet_String(), build_nondet_String(), __VERIFIER_nondet_int("cstrncmp_1"));
}

