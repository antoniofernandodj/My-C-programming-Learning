#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[] = "Phrase";

    printf("%s\n\n", str1);

    puts(str1);
    printf("%c\n", str1[1]);
    printf("%c\n", str1[2]);
    printf("%c\n", str1[3]);
    printf("%c\n", str1[4]);
    printf("%c\n", str1[5]);

    printf("The length of str1[] = %ld\n\n", strlen(str1));

    char string[] = "Hello";
    int i;
    i = 0;
    while (string[i] != '\0') {
        printf("%c\n", string[i]);
        i++;
    }

    return 0;
}
