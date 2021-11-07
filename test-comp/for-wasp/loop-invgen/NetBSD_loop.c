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
  int MAXPATHLEN;
  int pathbuf_off;
  int bound_off;
  int glob2_p_off;
  int glob2_pathbuf_off;
  int glob2_pathlim_off;
  MAXPATHLEN = __VERIFIER_nondet_int("MAXPATHLEN");
  if (__logand(MAXPATHLEN > 0, MAXPATHLEN < 2147483647))
    ;
  else
    goto END;

  pathbuf_off = 0;
  bound_off = (pathbuf_off + (MAXPATHLEN + 1)) - 1;
  glob2_pathbuf_off = pathbuf_off;
  glob2_pathlim_off = bound_off;
  for (glob2_p_off = glob2_pathbuf_off; glob2_p_off <= glob2_pathlim_off; glob2_p_off++)
  {
    __VERIFIER_assert(0 <= glob2_p_off);
    __VERIFIER_assert(glob2_p_off < (MAXPATHLEN + 1));
  }

  END:
  return 0;

}

