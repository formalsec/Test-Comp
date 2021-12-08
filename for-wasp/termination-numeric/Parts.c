extern int __VERIFIER_nondet_int(char *);
int parts(int p, int q)
{
  if (p <= 0)
    return 1;
  else
    if (q <= 0)
    return 0;
  else
    if (q > p)
    return parts(p, p);
  else
    return parts(p - q, q) + parts(p, q - 1);



}

int main()
{
  int x = __VERIFIER_nondet_int("x");
  if (x < 0)
    return 0;

  int y = __VERIFIER_nondet_int("y");
  if (y < 0)
    return 0;

  int z = __VERIFIER_nondet_int("z");
  for (int p = 0; p <= x; p++)
    for (int q = 0; q <= x; q++)
    parts(p, q);


}

