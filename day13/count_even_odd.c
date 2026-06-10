#include<stdio.h>
int main() {
    int arr[20];
    int even_count = 0, odd_count = 0;
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (int i=0; i<n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<n; i++){
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("Count of even numbers: %d\n", even_count);
    printf("Count of odd numbers: %d\n", odd_count);
    
    return 0;
}
