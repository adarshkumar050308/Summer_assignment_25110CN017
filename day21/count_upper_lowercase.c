#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int upper = 0, lower = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Check if the character is uppercase
        if (ch >= 'A' && ch <= 'Z') {
            upper++;
        }
        // Check if the character is lowercase
        else if (ch >= 'a' && ch <= 'z') {
            lower++;
        }
    }
    
    printf("Number of uppercase letters: %d\n", upper);
    printf("Number of lowercase letters: %d\n", lower);
    
    return 0;
}
