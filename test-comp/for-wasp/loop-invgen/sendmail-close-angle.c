extern void abort(void);
void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
void reach_error()
{
  assert(0);
}

extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

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

int __VERIFIER_nondet_int();
int main()
{
  int in;
  int inlen = __VERIFIER_nondet_int("inlen");
  int bufferlen = __VERIFIER_nondet_int("bufferlen");
  int buf;
  int buflim;
  if (bufferlen > 1)
    ;
  else
    goto END;

  if (inlen > 0)
    ;
  else
    goto END;

  if (bufferlen < inlen)
    ;
  else
    goto END;

  buf = 0;
  in = 0;
  buflim = bufferlen - 2;
  while (__VERIFIER_nondet_int("while_1"))
  {
    if (buf == buflim)
      break;

    __VERIFIER_assert(0 <= buf);
    __VERIFIER_assert(buf < bufferlen);
    buf++;
    out:
    in++;

    __VERIFIER_assert(0 <= in);
    __VERIFIER_assert(in < inlen);
  }

  __VERIFIER_assert(0 <= buf);
  __VERIFIER_assert(buf < bufferlen);
  buf++;
  __VERIFIER_assert(0 <= buf);
  __VERIFIER_assert(buf < bufferlen);
  buf++;
  END:
  return 0;

}

