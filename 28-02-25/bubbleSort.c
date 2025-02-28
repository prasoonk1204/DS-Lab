#include <stdio.h>

int main() {
    int i, j, n, temp;
    
    printf("Enter no. of elements in the array:");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter elements for the array:");
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\nEntered array: \n");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
     for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nSorted array: \n");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
