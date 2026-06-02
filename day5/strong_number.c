#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
int main(){
    int n, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }

    return 0;

}
