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
  int p;
  int i;
  int leader_len;
  int bufsize;
  int bufsize_0;
  int ielen;
  leader_len = __VERIFIER_nondet_int("leader_len");
  bufsize = __VERIFIER_nondet_int("bufsize");
  ielen = __VERIFIER_nondet_int("ielen");
  if (!(leader_len < 1000000))
    return 0;

  if (!(bufsize < 1000000))
    return 0;

  if (!(ielen < 1000000))
    return 0;

  if (leader_len > 0)
    ;
  else
    goto END;

  if (bufsize > 0)
    ;
  else
    goto END;

  if (ielen > 0)
    ;
  else
    goto END;

  if (bufsize < leader_len)
    goto END;

  p = 0;
  bufsize_0 = bufsize;
  bufsize -= leader_len;
  p += leader_len;
  if (bufsize < (2 * ielen))
    goto END;

  for (i = 0; __logand(i < ielen, bufsize > 2); i++)
  {
    __VERIFIER_assert(0 <= p);
    __VERIFIER_assert((p + 1) < bufsize_0);
    p += 2;
  }

  END:
  ;

}

