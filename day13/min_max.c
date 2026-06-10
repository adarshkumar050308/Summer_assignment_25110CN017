#include<stdio.h>
int main() {
    int arr[20];
    int max,min;
    for (int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];   
    for (int i=1; i<10; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);
    return 0;
}
