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
    
    // Reverse the string
    char reversed[100];
    for (int i = 0; i < length - 1; i++) { // Exclude the newline character
        reversed[i] = str[length - 2 - i]; // Start from the end of the string
    }
    reversed[length - 1] = '\0'; // Null-terminate the reversed string
    
    printf("Reversed string: %s\n", reversed);
    
    return 0;
}
