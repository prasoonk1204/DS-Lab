#include <stdio.h>

int main() {
    int temp;
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }
    
    int size = (sizeof(arr))/(sizeof(arr[0]));
    
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("%d", arr[1]);
    return 0;
}
