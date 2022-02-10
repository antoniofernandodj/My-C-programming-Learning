#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // Declare strings
    char str1[] = "Phrase";

    // Print String
    printf("%s\n\n", str1);
    puts(str1);

    // Accessing characters of string
    printf("%c\n", str1[1]);
    printf("%c\n", str1[2]);
    printf("%c\n", str1[3]);
    printf("%c\n", str1[4]);
    printf("%c\n", str1[5]);

    // Length of strings
    printf("The length of str1[] = %ld\n\n", strlen(str1));

    // Iterate strings
    char string[] = "Hello";
    int i;
    i = 0;
    while (string[i] != '\0') {
        printf("%c\n", string[i]);
        i++;
    }

    // Compare strings
    char var1[100], var2[100];
  
    //input
    printf("Enter string 1: ");
    scanf("%s", var1);

    printf("Enter string 2: ");
    scanf("%s", var2);

    if (strcmp(var1, var2) == 0) {
        printf("Both are same.\n");
    } else {
        printf("Both are different.\n");
    }

    // Concatenate strings
    //variable
    char
        str1[] = "Hello",
        str2[] = "World",
        str3[100] = "";
    
    //concat
    strcat(str3, str1);  //concat "Hello" to str3 so, str3 = "Hello"
    strcat(str3, " ");   //concat " " to str3     so, str3 = "Hello "
    strcat(str3, str2);  //concat "World" to str3 so, str3 = "Hello World"
  
    printf("Concatenated string: %s\n", str3);
    
    return 0;
}
