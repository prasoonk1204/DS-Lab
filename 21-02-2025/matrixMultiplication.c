#include <stdio.h>

int main() {
    int row1, col1;
    
    printf("Enter the number of rows for matrix 1:");
    scanf("%d", &row1);
    
    printf("Enter the number of columns for matrix 1:");
    scanf("%d", &col1);
    
    int mat1[row1][col1];
    
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            printf("Enter elem %d of row %d :", j+1, i+1);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    int row2, col2;
    
    printf("Enter the number of rows for matrix 2:");
    scanf("%d", &row2);
    
    printf("Enter the number of columns for matrix 2:");
    scanf("%d", &col2);
    
    int mat2[row2][col2];
    
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            printf("Enter elem %d of row %d :", j+1, i+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    printf("The first matrix:\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix:\n");
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    
    int result[row1][col2];
    
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            result[i][j] = 0;
            for(int k=0; k<col1; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("Multiplied matrix: \n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
