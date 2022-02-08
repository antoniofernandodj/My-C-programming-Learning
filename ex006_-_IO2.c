#include <stdio.h>
#include <stdlib.h>

int main() {
    char CelebrityF[20];
    char CelebrityL[20];

    printf("Enter a celebrity: ");
    scanf("%s%s", CelebrityF, CelebrityL);
    printf("I love %s %s", CelebrityF, CelebrityL);
    return 0;
}