#include <stdio.h>

int main() {
    
    int row,col;
    printf("Enter the number of rows for the matrix:");
    scanf("%d", &row);
    
    printf("Enter the number of columns for the matrix:");
    scanf("%d", &col);
    
    int arr[row][col];
    
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("Enter element %d for row %d : ", j+1, i+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The matrix is:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("The tansposed matrix is: \n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
	    return 0;
}
