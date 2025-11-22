//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>

int countOccurrences(char str[], char ch, int index) {
    if (str[index] == '\0') return 0;                
    if (str[index] == ch) 
        return 1 + countOccurrences(str, ch, index + 1);
    else 
        return countOccurrences(str, ch, index + 1);
}

int main() {
    char str[100], ch;
    
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);  

    int count = countOccurrences(str, ch, 0);

    printf("'%c' occurs %d times in \"%s\".\n", ch, count, str);
    return 0;
}