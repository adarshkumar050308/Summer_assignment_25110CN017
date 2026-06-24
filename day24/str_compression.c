#include<stdio.h>
#include<string.h>

void compressString(char *str) {
    int count = 1;
    int j = 0;
    char compressed[1000];
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            compressed[j++] = str[i];
            if (count > 1) {
                j += sprintf(compressed + j, "%d", count);
            }
            count = 1;
        }
    }
    compressed[j] = '\0';
    
    strcpy(str, compressed);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    compressString(str);
    printf("Compressed string: %s\n", str);
    
    return 0;
}
