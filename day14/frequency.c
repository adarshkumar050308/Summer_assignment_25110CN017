#include<stdio.h>
int main() {
    int arr[20];
    int frequency[20] = {0};
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find frequency: ");
    int target;
    scanf("%d", &target);
    for (int i=0; i<n; i++){
        if (arr[i] == target) {
            frequency[i]++;
        }
    }
    int count = 0;
    for (int i=0; i<n; i++){
        count += frequency[i];
        
    }   
    printf("The frequency of %d is: %d\n", target, count);
    return 0;
}
