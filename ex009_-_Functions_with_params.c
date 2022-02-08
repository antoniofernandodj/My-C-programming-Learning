#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
    double result = num * num * num;
    return result;
}

int main() {
    double x = cube(3);
    printf("%lf", x);
}