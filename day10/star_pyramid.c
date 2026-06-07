#include <stdio.h>
int main() {
    int i, j, rows,col;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= (rows - i); j++){
            printf("  ");
        }
        for(col = 1; col <= (2 * i - 1); col++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}
