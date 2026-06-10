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
    int largest = arr[0];
    int second_largest = arr[0];
    for (int i=1; i<n; i++){
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    printf("The second largest number is: %d\n", second_largest);
    return 0;
}
