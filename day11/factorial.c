#include<stdio.h>
int fact(int num) {
    if (num == 0 || num == 1) {
        return 1; // Factorial of 0 and 1 is 1
    }
    return num * fact(num - 1); // Recursive call
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = fact(num);
    printf("The factorial of %d is: %d\n", num, result);
    return 0;
}
