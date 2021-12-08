#include <stdlib.h>
#include <alloca.h>

extern int __VERIFIER_nondet_int(void);

int test_fun(int x, int y, int z)
{
    int* x_ref = alloca(sizeof(int));
    int* y_ref = alloca(sizeof(int));
    int* z_ref = alloca(sizeof(int));
    *x_ref = x;
    *y_ref = y;
    *z_ref = z;
    if(*y_ref <= 0) {
        // replace assume
        return *z_ref;
    }
    while (*x_ref >= *z_ref && *z_ref <= 2147483647 - *y_ref) {
        if(*y_ref <= 0) {
            // replace assume
            return *z_ref;
        }
        *z_ref = *z_ref + *y_ref;
    }
    return *z_ref;
}

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  int z = __VERIFIER_nondet_int();
  return test_fun(x,y,z);
}
