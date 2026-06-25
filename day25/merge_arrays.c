#include <stdio.h>
#include <stdlib.h>

void merge_sorted(const int *a, int na, const int *b, int nb, int *out) {
    int i = 0, j = 0, k = 0;
    while (i < na && j < nb) {
        if (a[i] <= b[j]) {
            out[k++] = a[i++];
        } else {
            out[k++] = b[j++];
        }
    }
    while (i < na) {
        out[k++] = a[i++];
    }
    while (j < nb) {
        out[k++] = b[j++];
    }
}

int main(void) {
    int na, nb;
    printf("Enter the number of elements in the first and second array: ");
    if (scanf("%d %d", &na, &nb) != 2) {
        return 0;
    }

    int *a = malloc(na * sizeof(int));
    int *b = malloc(nb * sizeof(int));
    int *merged = malloc((na + nb) * sizeof(int));
    if (!a || !b || !merged) {
        free(a);
        free(b);
        free(merged);
        return 1;
    }
    printf("Enter %d elements for the first array:\n", na);
    for (int i = 0; i < na; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter %d elements for the second array:\n", nb);
    for (int j = 0; j < nb; j++) {
        scanf("%d", &b[j]);
    }

    merge_sorted(a, na, b, nb, merged);
    printf("Merged array:\n");
    for (int i = 0; i < na + nb; i++) {
        printf("%d", merged[i]);
        if (i < na + nb - 1) {
            printf(" ");
        }
    }
    printf("\n");

    free(a);
    free(b);
    free(merged);
    return 0;
}
