#include<stdio.h>
int main() {
    int arr[20];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Duplicate numbers in the array are: ");
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
