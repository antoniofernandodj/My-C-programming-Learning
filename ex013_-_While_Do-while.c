#include <stdio.h>
#include <stdlib.h>
int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
    
    int j = 1;
    do {
        printf("%d ", j);
        j++;
    } while (j < 6);
    return 0;
}