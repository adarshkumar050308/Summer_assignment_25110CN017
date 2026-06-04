#include<stdio.h>

int sum(int n) {
    if (n < 10)
        return n;
    return (n % 10) + sum(n / 10);
}

int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1)
        return 0;
    if (n < 0)
        n = -n;
    printf("The sum of digits is %d", sum(n));
    return 0;
}
