#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    char result[100]; // Array to store the string without spaces
    int j = 0; // Index for the result array
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Check if the character is not a space
        if (ch != ' ') {
            result[j] = ch; // Add the character to the result array
            j++;
        }
    }
    
    result[j] = '\0'; // Null-terminate the result string
    
    printf("String without spaces: %s\n", result);
    
    return 0;
}
