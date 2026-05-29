#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int reverse = 0;
    while(n != 0){
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    printf("Reverse of the entered number is: %d\n", reverse);
    return 0;
}
