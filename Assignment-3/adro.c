#include <stdio.h>

#define MAX 10
int main() {
    int matrix[MAX][MAX];
    int rowSum[MAX] = {0};
    int colSum[MAX] = {0};
    int rows, cols;
    printf("Enter number of rows and columns ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] = rowSum[i]+matrix[i][j];
            colSum[j] = colSum[j]+matrix[i][j];
        }
    }
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    printf("\nSum of each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
    return 0;
}

