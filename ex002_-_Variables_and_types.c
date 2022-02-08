#include <stdio.h>
#include <stdlib.h>

int main () {
    char letter = 'A';
    char name[8] = "Antonio";
    int grade = 10;
    float height = 1.7;
    double weight = 69.76;

    printf("Hi! My name is %s, and the first letter of my name is %c\n", name, letter);
    printf("I am a grade %d student, always applying myself\n", grade);
    printf("My height is %f, and my weight is %lfkg", height, weight);
    return 0;
}
