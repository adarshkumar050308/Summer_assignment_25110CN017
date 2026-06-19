#include<stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    // Subtracting 1 to exclude the newline character added by fgets
    printf("Length of the string: %d\n", length - 1);
    
    return 0;
}
