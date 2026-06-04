#include <stdio.h>

int main() {
    int a, b, result = 1;
    
    printf("Enter base: ");
    scanf("%d", &a);
    
    printf("Enter power: ");
    scanf("%d", &b);
    
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    
    printf("%d raised to the power of %d is %d\n", a, b, result);
    
    return 0;
}

