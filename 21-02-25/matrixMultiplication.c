#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &row1);
    
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &col1);
    
    int mat1[row1][col1];
    
    printf("Enter elements of Matrix 1:\n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &row2);
    
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &col2);

    if (col1 != row2) {
        printf("Matrix multiplication is not possible (Columns of Matrix 1 must equal Rows of Matrix 2).\n");
        return 1; 
    }
    
    int mat2[row2][col2];
    
    printf("Enter elements of Matrix 2:\n");
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    printf("\nThe first matrix:\n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe second matrix:\n");
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    int result[row1][col2];

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("\nMultiplied Matrix:\n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
