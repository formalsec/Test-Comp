extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "invert_string-3.c", 3, "reach_error");
}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

  return;
}

char __VERIFIER_nondet_char(char *);
int main()
{
  unsigned int max = 5;
  char str1[max];
  char str2[max];
  int i;
  int j;
  for (i = 0; i < max; i++)
  {
    str1[i] = __VERIFIER_nondet_char("str1[i]");
  }

  str1[max - 1] = '\0';
  j = 0;
  for (i = max - 1; i >= 0; i--)
  {
    str2[j] = str1[i];
    j++;
  }

  j = max - 1;
  for (i = 0; i < max; i++)
  {
    __VERIFIER_assert(str1[i] == str2[j]);
    j--;
  }

}

