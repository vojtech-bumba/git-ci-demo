#include "fact.h"

unsigned long long MyMath::factorial(unsigned long long n) {
    if (n < 0) {
        return 0;
    }
    unsigned long long product = 1;
    for (unsigned long long i = n; i > 0; i--) {
        product *= i;
    }
    return product;
}
