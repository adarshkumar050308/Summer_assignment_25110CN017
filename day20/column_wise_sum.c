#include<stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // calculating column-wise sum
    int colSum[cols];
    for (int j = 0; j < cols; j++) {
        colSum[j] = 0;
        for (int i = 0; i < rows; i++) {
            colSum[j] += matrix[i][j];
        }
    }
    
    printf("Column-wise sum:\n");
    for (int j = 0; j < cols; j++) {
        printf("Sum of column %d: %d\n", j + 1, colSum[j]);
    }
    
    return 0;
}
