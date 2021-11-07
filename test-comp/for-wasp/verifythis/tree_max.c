extern void *malloc(unsigned int size);
extern void free(void *);
extern int __VERIFIER_nondet_int(char *);
extern _Bool __VERIFIER_nondet_bool(char *);
extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }

}

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error()
{
  __assert_fail("0", "tree_max.c", 13, "reach_error");
}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    reach_error();
    abort();
  }

}

struct node
{
  int data;
  struct node *left;
  struct node *right;
};
struct node *nondet_tree()
{
  if (__VERIFIER_nondet_bool("if_1"))
  {
    return 0;
  }
  else
  {
    struct node *n = (struct node *) malloc(sizeof(struct node));
    n->data = __VERIFIER_nondet_int("data");
    n->left = nondet_tree();
    n->right = nondet_tree();
    return n;
  }

}

int max(struct node *n)
{
  if (!n)
  {
    return -2147483648;
  }
  else
  {
    int a = n->data;
    int b = max(n->left);
    int c = max(n->right);
    if (__logand(b >= a, b >= c))
      return b;

    if (__logand(c >= a, c >= b))
      return c;

    return a;
  }

}

void check(struct node *n, int a)
{
  if (n)
  {
    __VERIFIER_assert(n->data <= a);
    if (__VERIFIER_nondet_bool("if_2"))
    {
      check(n->left, a);
    }
    else
    {
      check(n->right, a);
    }

  }

}

void task(struct node *n)
{
  int a = max(n);
  check(n, a);
}

int main()
{
  task(nondet_tree());
}

