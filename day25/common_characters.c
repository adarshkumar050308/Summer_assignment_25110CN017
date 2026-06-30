#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char s1[1024];
    char s2[1024];
    bool seen[256] = { false };
    bool common[256] = { false };

    if (fgets(s1, sizeof(s1), stdin) == NULL)
        return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL)
        return 0;

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    for (size_t i = 0; i < strlen(s1); ++i)
        seen[(unsigned char)s1[i]] = true;

    for (size_t i = 0; i < strlen(s2); ++i) {
        unsigned char c = (unsigned char)s2[i];
        if (seen[c])
            common[c] = true;
    }

    for (int i = 0; i < 256; ++i) {
        if (common[i])
            putchar((char)i);
    }
    putchar('\n');

    return 0;
}
