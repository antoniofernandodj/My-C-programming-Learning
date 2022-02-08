/* ARRAYS!!! */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int LuckyNumbers[] = {4, 8, 15, 16, 23, 42};
    printf("%d\n", LuckyNumbers[0]);
    printf("%d\n", LuckyNumbers[2]);

    LuckyNumbers[2] = 200;
    printf("%d\n", LuckyNumbers[2]);

    int array1[] = {1,2,3,4,5};
    float array2[] = {2.45, 6.1423, 7.3557, 5.3634};
    double array3[] = {2.3465335, 7.34573167, 8.22566365, 9.59681523};
    
    return 0;
}