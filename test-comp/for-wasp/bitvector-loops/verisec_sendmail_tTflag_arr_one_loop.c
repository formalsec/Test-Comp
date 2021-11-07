extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "verisec_sendmail_tTflag_arr_one_loop.c", 3, "reach_error");
}

extern char __VERIFIER_nondet_char(char *);
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

int main(void)
{
  char in[11];
  char *s;
  unsigned char c;
  int i;
  int j;
  int idx_in;
  for (i = 0; i < 11; i++)
    in[i] = __VERIFIER_nondet_char("in[i]");

  in[10] = 0;
  idx_in = 0;
  s = in;
  i = 0;
  c = in[idx_in];
  while (__logand('0' <= c, c <= '9'))
  {
    j = c - '0';
    i = (i * 10U) + j;
    idx_in++;
    c = in[idx_in];
  }

  __VERIFIER_assert(i >= 0);
  return 0;
}

