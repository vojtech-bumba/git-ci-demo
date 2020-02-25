#include "fact.h"

long long MyMath::factorial(long long n) {
    if (n < 1) {
        return 0;
    }
    long long product = 1;
    for (long long i = n; i > 0; i--) {
        product *= i;
    }
    return product;
}
