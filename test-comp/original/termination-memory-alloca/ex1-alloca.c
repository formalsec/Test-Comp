#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

int test_fun(int x, int y, int r)
{
    int* x_ref = alloca(sizeof(int));
    int* y_ref = alloca(sizeof(int));
    int* r_ref = alloca(sizeof(int));
    r = 1;
    *x_ref = x;
    *y_ref = y;
    *r_ref = r;
    while (*y_ref > 0) {
        *r_ref = (*r_ref) * (*x_ref);
        *y_ref = *y_ref - 1;
    }
    return *r_ref;
}

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  int r = __VERIFIER_nondet_int();
  return test_fun(x,y,r);
}
