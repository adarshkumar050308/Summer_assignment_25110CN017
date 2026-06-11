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
    int temp = arr[n-1];
    for (int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    printf("The array after left rotation is: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
