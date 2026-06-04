#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (num < 0) {
        printf("Negative numbers are not supported.\n");
        return 1;
    }
    int result = reverse(num);
    printf("The reverse of %d is %d\n", num, result);
    return 0;
}
