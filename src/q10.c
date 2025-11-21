// Write a C program to concatenate two strings without using the built-in string functions.
#include <stdio.h>

int main() 
{
    char str1[1000], str2[1000];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    while (str2[j] != '\0' && str2[j] != '\n') 
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; 
    printf("Concatenated string: %s\n", str1);
    return 0;
}