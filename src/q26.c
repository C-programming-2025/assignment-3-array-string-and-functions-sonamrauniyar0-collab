// Write a recursive function named reverseString that takes a string as input and returns the reversed string.
#include <stdio.h>

void reverseString(char str[], int index) {
    if (str[index] == '\0')   
        return;
    reverseString(str, index + 1);  
    putchar(str[index]);   
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str, 0);
    return 0;
}