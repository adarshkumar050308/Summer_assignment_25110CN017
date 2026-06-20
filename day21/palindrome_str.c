#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Calculate the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    // Check if the string is a palindrome
    int isPalindrome = 1; // Assume it is a palindrome until proven otherwise
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 2 - i]) { // Compare characters from both ends
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }
    
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}       
