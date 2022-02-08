#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n1 = 7;
    int n2 = 8;
    int n3 = 10;
    
    float n = (n1 + n2 + n3)/3;
    printf("mean(n1,n2,n3) = %f\n", n);

    double n = (n1 + n2 + n3)/3;
    printf("mean(n1,n2,n3) = %lf\n", n);

    const long double pi = 3.14159265358979;
    printf("pi = %.14Lf\n", pi);

    const long long long_number = 1989000000000000000;
    printf("long number: %lld", long_number);
    return 0;
}