#include<stdio.h>
int maximum(int a, int b,int c) {
    return (a > b && a > c) ? a : (b > c) ? b : c;
}
int main(){
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int result = maximum(num1, num2, num3);
    printf("The maximum of %d, %d, and %d is: %d\n", num1, num2, num3, result);
    return 0;
}
