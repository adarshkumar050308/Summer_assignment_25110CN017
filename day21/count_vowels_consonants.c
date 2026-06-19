#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int vowels = 0, consonants = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check if the character is a consonant
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }
    
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    
    return 0;
}
