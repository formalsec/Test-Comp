typedef enum 
{
  false,
  true
} bool;
extern int __VERIFIER_nondet_int(char *);
int main()
{
  int id;
  int maxId;
  int tmp;
  id = __VERIFIER_nondet_int("id");
  maxId = __VERIFIER_nondet_int("maxId");
  if (__logand(0 <= id, id < maxId))
  {
    tmp = id + 1;
    while (__logand(tmp != id, __VERIFIER_nondet_int("while_1") != 0))
    {
      if (tmp <= maxId)
      {
        tmp = tmp + 1;
      }
      else
      {
        tmp = 0;
      }

    }

  }

  return 0;
}

