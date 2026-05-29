#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int product = 1;
    while(n != 0){
        product *= n % 10;
        n /= 10;
    }
    printf("Product of the digits in the entered number is: %d\n", product);
    return 0;
}
