#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n1 = 7;
    int n2 = 8;
    int n3 = 10;
    
    float n = (n1 + n2 + n3)/3;
    printf("mean(n1,n2,n3) = %f\n", n);

    double m = (n1 + n2 + n3)/3;
    printf("mean(n1,n2,n3) = %lf\n", m);

    const long double pi = 3.14159265358979;
    printf("pi = %.14Lf\n", pi);

    const long long long_number = 1989000000000000000;
    printf("long number: %lld", long_number);
    printf("\n");

    // Remainder
    int
        a = 9,
        b = 4;
    
    int rem = a % b;
  
    printf("Remainder: %d\n", rem);
    printf("\n");

    // Typecast
    float
        x = 24.5,
        y = 7.2;

    //converting float to int
    int result = (int) x / (int) y;
  
    //output
    printf("Result = %d\n", result);

    return 0;
}
