#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int wordCount = 0;
    int inWord = 0; // Flag to track if we are inside a word
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Check if the character is a space or newline
        if (ch == ' ' || ch == '\n') {
            if (inWord) {
                wordCount++; // End of a word
                inWord = 0; // Reset the flag
            }
        } else {
            inWord = 1; // We are inside a word
        }
    }
    
    // If the last character is not a space, count the last word
    if (inWord) {
        wordCount++;
    }
    
    printf("Number of words: %d\n", wordCount);
    
    return 0;
}
