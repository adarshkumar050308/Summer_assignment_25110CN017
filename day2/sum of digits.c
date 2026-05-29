#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of the digits in the entered number is: %d\n", sum);
    return 0;
}
