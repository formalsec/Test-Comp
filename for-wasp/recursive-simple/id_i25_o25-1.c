extern int __VERIFIER_nondet_int(char *);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "id_i25_o25-1.c", 4, "reach_error");
}

int id(int x)
{
  if (x == 0)
    return 0;

  return id(x - 1) + 1;
}

int main(void)
{
  int input = 25;
  int result = id(input);
  if (result != 25)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }

}

