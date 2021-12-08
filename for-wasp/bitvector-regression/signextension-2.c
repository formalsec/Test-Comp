extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "signextension-2.c", 3, "reach_error");
}

int main()
{
  unsigned short int allbits = -1;
  short int signedallbits = allbits;
  int unsignedtosigned = allbits;
  unsigned int unsignedtounsigned = allbits;
  int signedtosigned = signedallbits;
  unsigned int signedtounsigned = signedallbits;
  if (__logor(__logor(__logor(unsignedtosigned != 65535, unsignedtounsigned != 65535), signedtosigned != (-1)), signedtounsigned != 4294967295))
  {
    goto ERROR;
  }

  return 0;
  ERROR:
  {
    reach_error();
    abort();
  }

  return -1;
}

