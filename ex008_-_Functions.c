#include <stdio.h>
#include <stdlib.h>

void SayHi() {
    printf("Hello user!\n");
}

void SayHiName(char name[], int age) {
    printf("Hello %s! You are %d\n", name, age);
}

int main() {
    SayHi();
    SayHiName("Antonio", 28);
    return 0;
}