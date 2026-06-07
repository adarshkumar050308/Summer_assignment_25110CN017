#include <stdio.h>
int main() {
    int i, j, rows,col;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = rows; i >=1 ; i--){
        for(j = (rows - i); j >= 1; j--){
            printf("  ");
        }
        for(col = 1; col <= (2 * i - 1); col++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}
