#include <stdio.h>

int binarySearch(int arr[], int n, int num) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num)
            return mid;
        else if (arr[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, num, i, j, temp;

    printf("Enter no. of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter the element to search: ");
    scanf("%d", &num);

    int res = binarySearch(arr, n, num);

    if (res != -1)
        printf("Element %d found at index: %d\n", num, res);
    else
        printf("Element not found.\n");

    return 0;
}
