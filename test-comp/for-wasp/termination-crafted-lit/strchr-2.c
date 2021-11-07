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

char *cstrchr(const char *s, int c)
{
  while (__logand((*s) != '\0', (*s) != ((char) c)))
    s++;

  return ((*s) == c) ? ((char *) s) : (0);
}

int main()
{
  cstrchr(build_nondet_String(), __VERIFIER_nondet_int("cstrchr_1"));
  return 0;
}

