#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() {

    struct Student std1;
    std1.age = 22;
    std1.gpa = 3.2;
    strcpy(std1.name, "Tom");
    strcpy(std1.major, "Engineer");

    printf("Student: %s\n", std1.name);
    printf("major: %s\n", std1.major);
    printf("age: %d\n", std1.age);
    printf("gpa: %lf\n", std1.gpa);
}