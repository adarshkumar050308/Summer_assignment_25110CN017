#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Read all input from stdin, split into words by whitespace,
// sort words by length (ascending) and print one per line.

int cmp_len(const void *a, const void *b) {
    const char * const *pa = a;
    const char * const *pb = b;
    size_t la = strlen(*pa);
    size_t lb = strlen(*pb);
    if (la < lb) return -1;
    if (la > lb) return 1;
    return 0;
}

int main(void) {
    // Read stdin into buffer
    size_t cap = 1<<16;
    size_t len = 0;
    char *buf = malloc(cap);
    if (!buf) return 1;
    while (1) {
        size_t r = fread(buf + len, 1, cap - len, stdin);
        len += r;
        if (r == 0) break;
        if (len + 1 >= cap) {
            cap *= 2;
            char *t = realloc(buf, cap);
            if (!t) { free(buf); return 1; }
            buf = t;
        }
    }
    if (len == 0) { free(buf); return 0; }
    buf[len] = '\0';

    // Extract words
    char **words = NULL;
    size_t nwords = 0;
    char *p = buf;
    while (*p) {
        while (*p && (*p==' ' || *p=='\n' || *p=='\t' || *p=='\r' || *p=='\v' || *p=='\f')) p++;
        if (!*p) break;
        char *start = p;
        while (*p && !(*p==' ' || *p=='\n' || *p=='\t' || *p=='\r' || *p=='\v' || *p=='\f')) p++;
        size_t wlen = p - start;
        char *word = malloc(wlen + 1);
        if (!word) break;
        memcpy(word, start, wlen);
        word[wlen] = '\0';
        char **t = realloc(words, (nwords+1) * sizeof(char*));
        if (!t) { free(word); break; }
        words = t;
        words[nwords++] = word;
    }

    // Sort by length
    if (nwords > 1) qsort(words, nwords, sizeof(char*), cmp_len);

    // Print
    for (size_t i = 0; i < nwords; ++i) {
        printf("%s\n", words[i]);
        free(words[i]);
    }
    free(words);
    free(buf);
    return 0;
}
