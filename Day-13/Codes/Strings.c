Example 6:
Write a C program that:
Accepts two strings as input from the user.
Concatenates the two strings Displays the concatenated result.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); 

   
    str1[strcspn(str1, "\n")] = '\0';  
    str2[strcspn(str2, "\n")] = '\0';  

   
    strcat(str1, str2);

    
    printf("The concatenated string is: %s\n", str1);

    return 0;
}

