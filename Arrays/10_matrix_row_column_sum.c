#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Sum of each row:\n");
    for(int i = 0; i < rows; i++){
        int row_sum = 0;
        for(int j = 0; j < cols; j++){
            row_sum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, row_sum);
    }


    printf("Sum of each column:\n");
    for(int j = 0; j < cols; j++){
        int col_sum = 0;
        for(int i = 0; i < rows; i++){
            col_sum += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, col_sum);
    }

    return 0;
}
