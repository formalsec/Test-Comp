extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "compact.c", 3, "reach_error");
}

extern char __VERIFIER_nondet_char(char *);
int main()
{
  static char array[1024 * 100];
  char ND = __VERIFIER_nondet_char("ND");
  unsigned int i;
  for (i = 0; i < (sizeof(array)); i++)
    array[i] = __VERIFIER_nondet_char("array[i]");

  for (i = 0; i < (sizeof(array)); i++)
    if (array[i] == ND)
    return i;


  ERROR:
  {
    reach_error();
    abort();
  }

  return 0;
}

