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
    
    // Print the frequency of each character
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' : %d\n", i, frequency[i]);
        }
    }
    
    return 0;
}
