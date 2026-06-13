#include<stdio.h>
int main() {
    int n1,n2;
    printf("Enter the number of elements in the first array:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter the elements of the first array:");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }   
    printf("Enter the number of elements in the second array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements of the second array:");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    // Create unique elements array
    int unique_size = n1 + n2;
    int unique_arr[unique_size];
    int unique_count = 0;
    for (int i = 0; i < n1; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < unique_count; j++) {
            if (arr1[i] == unique_arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            unique_arr[unique_count++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < unique_count; j++) {
            if (arr2[i] == unique_arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            unique_arr[unique_count++] = arr2[i];
        }
    }
    printf("Unique elements in the two arrays are:\n");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique_arr[i]);
    }
    printf("\n");
    return 0;
}
