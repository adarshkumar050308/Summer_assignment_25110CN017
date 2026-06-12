#include<stdio.h>
int main(){
    int n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &target);
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Indices of the two numbers that add up to %d are: %d and %d\n", target, i, j);
                return 0;
            }
        }
    }
    
    printf("No two numbers add up to %d\n", target);
    return 0;
}
