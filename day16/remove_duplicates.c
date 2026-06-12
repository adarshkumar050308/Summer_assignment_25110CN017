#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // Remove duplicates
    int unique_count = 0;
    for (int i=0; i<n; i++){
        int is_duplicate = 0;
        for (int j=0; j<i; j++){
            if (arr[i] == arr[j]){
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate){
            arr[unique_count] = arr[i];
            unique_count++;
        }
    }
    
    // Print unique elements
    printf("Array after removing duplicates:\n");
    for (int i=0; i<unique_count; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
