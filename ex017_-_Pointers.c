#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    /* STORING ADDRESSES */
    printf("age: %d,\t\tage_mem_adress:\t\t%p\n", age, &age);
    printf("grade: %c,\t\tgrade_mem_adress:\t%p\n", grade, &grade);
    printf("gpa: %lf,\tgpa_mem_adress:\t\t%p\n", gpa, &gpa);
    printf("\n");

    /* STORING POINTER IN VARIABLES */
    int *p_age = &age;
    double *p_gpa = &gpa;
    char *p_grade = &grade;

    printf("age_mem_adress:\t\t%p\n", p_age);
    printf("grade_mem_adress:\t%p\n", p_grade);
    printf("gpa_mem_adress:\t\t%p\n", p_gpa);
    printf("\n");

    /* DERREFERENCING POINTERS */
    printf("*p_age:\t\t%d\n", *p_age);
    printf("*p_grade:\t%d\n", *p_grade);
    printf("*p_gpa:\t\t%lf\n", *p_gpa);
    printf("\n");

    /* STORING ARRAYS AND ARRAYS OF POINTERS */
    int nums[5] = {35, 100, 75, 12};
    int *p_nums[4] = {&nums[0], &nums[1], &nums[2], &nums[3]};
    printf("p_nums[0]:\t\t%p\n", p_nums[0]);
    printf("p_nums[1]:\t\t%p\n", p_nums[1]);
    printf("p_nums[2]:\t\t%p\n", p_nums[2]);
    printf("p_nums[3]:\t\t%p\n", p_nums[3]);

    return 0;
}