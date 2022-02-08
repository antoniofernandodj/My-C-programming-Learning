#include <stdio.h>
#include <stdlib.h>

int main() {

    char file_name[] = "ex017.txt";
    
    FILE *fpointer1 = fopen(file_name, "w");
    fprintf(fpointer1, "Jim, Salesman\nPam, Receptionist\n");
    fclose(fpointer1);

    FILE *fpointer2 = fopen(file_name, "a");
    fprintf(fpointer2, "Tom, Engineer\n");
    fclose(fpointer2);

    return 0;
}