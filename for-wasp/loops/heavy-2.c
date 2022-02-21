extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "heavy-2.c", 3, "reach_error");
}

int main()
{
  static char array[1024 * 1024] = {1};
  unsigned int a = 1;
  unsigned int i;
  unsigned int j;
  unsigned int k;
  for (i = 0; i < (sizeof(array)); i++)
    for (j = 0; j < (sizeof(array)); j++)
    for (k = 0; k < (sizeof(array)); k++)
    array[i] = array[j] + array[k];



  if (a != 1)
    goto ERROR;

  return array[100];
  ERROR:
  {
    reach_error();
    abort();
  }

  return 1;
}

