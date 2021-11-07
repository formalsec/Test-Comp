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
  int scheme;
  int urilen;
  int tokenlen;
  int cp;
  int c;
  urilen = __VERIFIER_nondet_int("urilen");
  tokenlen = __VERIFIER_nondet_int("tokenlen");
  scheme = __VERIFIER_nondet_int("scheme");
  if (!__logand(urilen <= 1000000, urilen >= (-1000000)))
    return 0;

  if (!__logand(tokenlen <= 1000000, tokenlen >= (-1000000)))
    return 0;

  if (!__logand(scheme <= 1000000, scheme >= (-1000000)))
    return 0;

  if (urilen > 0)
    ;
  else
    goto END;

  if (tokenlen > 0)
    ;
  else
    goto END;

  if (scheme >= 0)
    ;
  else
    goto END;

  if (__logor(scheme == 0, (urilen - 1) < scheme))
  {
    goto END;
  }

  cp = scheme;
  __VERIFIER_assert((cp - 1) < urilen);
  __VERIFIER_assert(0 <= (cp - 1));
  if (__VERIFIER_nondet_int("if_1"))
  {
    __VERIFIER_assert(cp < urilen);
    __VERIFIER_assert(0 <= cp);
    while (cp != (urilen - 1))
    {
      if (__VERIFIER_nondet_int("if_2"))
        break;

      __VERIFIER_assert(cp < urilen);
      __VERIFIER_assert(0 <= cp);
      ++cp;
    }

    __VERIFIER_assert(cp < urilen);
    __VERIFIER_assert(0 <= cp);
    if (cp == (urilen - 1))
      goto END;

    __VERIFIER_assert((cp + 1) < urilen);
    __VERIFIER_assert(0 <= (cp + 1));
    if ((cp + 1) == (urilen - 1))
      goto END;

    ++cp;
    scheme = cp;
    if (__VERIFIER_nondet_int("if_3"))
    {
      c = 0;
      __VERIFIER_assert(cp < urilen);
      __VERIFIER_assert(0 <= cp);
      while (__logand(cp != (urilen - 1), c < (tokenlen - 1)))
      {
        __VERIFIER_assert(cp < urilen);
        __VERIFIER_assert(0 <= cp);
        if (__VERIFIER_nondet_int("if_4"))
        {
          ++c;
          __VERIFIER_assert(c < tokenlen);
          __VERIFIER_assert(0 <= c);
          __VERIFIER_assert(cp < urilen);
          __VERIFIER_assert(0 <= cp);
        }

        ++cp;
      }

      goto END;
    }

  }

  END:
  return 0;

}

