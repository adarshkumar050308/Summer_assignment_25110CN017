#include<stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}   
int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    
    return 0;
}
