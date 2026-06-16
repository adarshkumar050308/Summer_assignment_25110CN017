#include<stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Element not found
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid; // Element found at index mid
    }
    if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, high, target);
    }
}

int main() {
    printf("Enter the number of elements in the array: ");
    int x;
    scanf("%d", &x);
    int arr[x];
    printf("Enter the elements of the array in sorted order: ");
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
