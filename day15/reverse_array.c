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
    printf("The reversed array is: ");
    for (int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
