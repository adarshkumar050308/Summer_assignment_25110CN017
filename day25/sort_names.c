#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAMES 100
#define MAX_NAME_LEN 50

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char *names[MAX_NAMES];
    int count = 0;
    char buffer[MAX_NAME_LEN];
    
    printf("Enter names (empty line to finish):\n");
    
    while (count < MAX_NAMES && fgets(buffer, MAX_NAME_LEN, stdin) != NULL) {
        if (buffer[0] == '\n') break;
        
        buffer[strcspn(buffer, "\n")] = '\0';
        names[count] = malloc(strlen(buffer) + 1);
        strcpy(names[count], buffer);
        count++;
    }
    
    qsort(names, count, sizeof(char *), compare);
     
    printf("\nSorted names:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
        free(names[i]);
    }
    
    return 0;
}
