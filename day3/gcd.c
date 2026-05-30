#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("GCD of the entered numbers is: %d\n", a);
    
    return 0;
}
