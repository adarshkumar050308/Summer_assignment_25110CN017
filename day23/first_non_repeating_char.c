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
    
    // Find the first non-repeating character
    char firstNonRepeatingChar = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (frequency[(unsigned char)ch] == 1) {
            firstNonRepeatingChar = ch;
            break;
        }
    }
    
    if (firstNonRepeatingChar != '\0') {
        printf("First non-repeating character: '%c'\n", firstNonRepeatingChar);
    } else {
        printf("No non-repeating character found.\n");
    }
    
    return 0;
}
