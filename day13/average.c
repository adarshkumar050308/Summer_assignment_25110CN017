#include<stdio.h>
int main(){
    int arr[20];
    int sum = 0;
    for (int i=0; i<5; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<5; i++){
        sum += arr[i];
    }
    float average = sum / 5.0;
    printf("The average is: %.2f\n", average);  
    return 0;
}
