#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

int test_fun(int x, int y, int tmp)
{
    int* x_ref = alloca(sizeof(int));
    int* y_ref = alloca(sizeof(int));
    int* tmp_ref = alloca(sizeof(int));
    *x_ref = x;
    *y_ref = y;
    *tmp_ref = tmp;
    while (*x_ref > *y_ref) {
        *tmp_ref = *x_ref;
        *x_ref = *y_ref;
        *y_ref = *tmp_ref;
    }
    return *tmp_ref;
}

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  int tmp = __VERIFIER_nondet_int();
  return test_fun(x,y,tmp);
}
