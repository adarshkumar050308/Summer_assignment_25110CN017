#include<stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
 int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }   
    int result = fibonacci(num);
    printf("Fibonacci of %d is %d\n", num, result);
    return 0;
 }
