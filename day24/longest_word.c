#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    int c;
    char longest[1000] = "";
    char current[1000];
    int len = 0;

    while ((c = getchar()) != EOF) {
        if (!isspace(c)) {
            if (len < (int)sizeof(current) - 1) {
                current[len++] = c;
            }
        } else {
            if (len > 0) {
                current[len] = '\0';
                if (strlen(current) > strlen(longest)) {
                    strcpy(longest, current);
                }
                len = 0;
            }
        }
    }

    if (len > 0) {
        current[len] = '\0';
        if (strlen(current) > strlen(longest)) {
            strcpy(longest, current);
        }
    }

    if (longest[0] != '\0') {
        printf("%s\n", longest);
    }

    return 0;
}
