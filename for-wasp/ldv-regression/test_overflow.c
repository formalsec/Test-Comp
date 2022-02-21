extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *)  ;
void reach_error() { __assert_fail("0", "test_overflow.i", 3, "reach_error"); }

#include <stdlib.h>
#include <stdio.h>

void __blast_assert()
{
 ERROR: {reach_error();abort();}
}

ssize_t getService();
int globalSize;

int
main() {
 long int retVal;
 retVal = getService();
 ((sizeof(retVal)==globalSize) ? (0) : __blast_assert ());
 printf("returned value: %ld\n", retVal);
 return 0;
}

ssize_t getService() {
 ssize_t localVar = 999999999999;
 globalSize = sizeof(localVar);
 printf("localVar: %zd\n", localVar);
 return localVar;
}
