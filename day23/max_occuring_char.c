#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int frequency[256] = {0}; // Array to store frequency of each character
    
    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        frequency[(unsigned char)ch]++;
    }
    
    // Find the first repeating character
    char firstRepeatingChar = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (frequency[(unsigned char)ch] != 1) {
            firstRepeatingChar = ch;
            break;
        }
    }
    
    if (firstRepeatingChar != '\0') {
        printf("First repeating character: '%c'\n", firstRepeatingChar);
    } else {
        printf("No repeating character found.\n");
    }
    
    return 0;
}
