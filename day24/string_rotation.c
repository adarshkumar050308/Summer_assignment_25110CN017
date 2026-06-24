#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_rotation(const char *s1, const char *s2) {
    if (!s1 || !s2) return 0;
    size_t n1 = strlen(s1);
    size_t n2 = strlen(s2);
    if (n1 != n2) return 0;
    if (n1 == 0) return 1;

    char *concat = malloc(n1 * 2 + 1);
    if (!concat) return 0;
    strcpy(concat, s1);
    strcat(concat, s1);

    int result = strstr(concat, s2) != NULL;
    free(concat);
    return result;
}

int main(void) {
    char s1[1024];
    char s2[1024];

    if (fgets(s1, sizeof(s1), stdin) == NULL) return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL) return 0;

    s1[strcspn(s1, "\r\n")] = '\0';
    s2[strcspn(s2, "\r\n")] = '\0';

    if (is_rotation(s1, s2)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
