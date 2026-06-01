#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, r, res = 0,count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n; 
    while (temp != 0) {
         temp /= 10; 
        count++; }
    temp = n;
 
    while (temp != 0) {
        r = temp % 10;
       res= res+ pow(r, count);
        temp /= 10;
    }
    if (res == n)
     printf("%d is an Armstrong number.\n", n);
    else 
    printf("%d is not an Armstrong number.\n", n);
    return 0;
}
