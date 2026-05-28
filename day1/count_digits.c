#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
        int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    printf("Number of digits in the entered number is: %d\n", count);
    return 0;
}
