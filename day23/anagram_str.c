#include <stdio.h>
#include <string.h>
#include <ctype.h>

void normalize(char *s) {
    int i, j = 0;
    for (i = 0; s[i]; i++) {
        if (!isspace((unsigned char)s[i])) {
            s[j++] = tolower((unsigned char)s[i]);
        }
    }
    s[j] = '\0';
}
int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Normalize both strings
    normalize(str1);
    normalize(str2);
    
    // Sort the normalized strings
    qsort(str1, strlen(str1), sizeof(char), (int (*)(const void *, const void *))strcmp);
    qsort(str2, strlen(str2), sizeof(char), (int (*)(const void *, const void *))strcmp);
    
    // Check if the sorted strings are equal
    if (strcmp(str1, str2) == 0) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    
    return 0;

}
